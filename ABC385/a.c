#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 26

// Function prototypes
void printBoard(char board[][MAX_SIZE], int n);
bool positionInBounds(int n, int row, int col);
bool checkLegalInDirection(char board[][MAX_SIZE], int n, int row, int col, char color, int deltaRow, int deltaCol);
bool isLegalMove(char board[][MAX_SIZE], int n, int row, int col, char color);
void applyMove(char board[][MAX_SIZE], int n, int row, int col, char color);
void printAvailableMoves(char board[][MAX_SIZE], int n, char color);

int main() {
    int n;
    char board[MAX_SIZE][MAX_SIZE];
    
    // Prompt for board dimension.
    printf("Enter the board dimension: ");
    scanf("%d", &n);
    
    // Clear newline from input buffer.
    while(getchar() != '\n');

    // Initialize board to 'U' (unoccupied).
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            board[i][j] = 'U';
        }
    }
    
    // Set the initial configuration: central four pieces.
    int mid = n / 2;
    board[mid - 1][mid - 1] = 'W';
    board[mid - 1][mid]     = 'B';
    board[mid][mid - 1]     = 'B';
    board[mid][mid]         = 'W';
    
    // Print the initial board.
    printBoard(board, n);
    
    // Input board configuration (until "!!!" is encountered).
    char input[10];
    printf("Enter board configuration:\n");
    while (1) {
        fgets(input, sizeof(input), stdin);
        // Remove newline if present.
        input[strcspn(input, "\n")] = '\0';
        if (strcmp(input, "!!!") == 0) {
            break;
        }
        // Input line must be at least 3 characters.
        if (strlen(input) >= 3) {
            char color = input[0];
            int row = input[1] - 'a';
            int col = input[2] - 'a';
            if (positionInBounds(n, row, col)) {
                board[row][col] = color;
            }
        }
    }
    
    // Print the board configuration after input.
    printBoard(board, n);
    
    // Print available moves for each player.
    printf("Available moves for W:\n");
    printAvailableMoves(board, n, 'W');
    
    printf("Available moves for B:\n");
    printAvailableMoves(board, n, 'B');
    
    // Get and process the move.
    printf("Enter a move:\n");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    
    if (strlen(input) >= 3) {
        char moveColor = input[0];
        int moveRow = input[1] - 'a';
        int moveCol = input[2] - 'a';
        
        if (positionInBounds(n, moveRow, moveCol) &&
            board[moveRow][moveCol] == 'U' &&
            isLegalMove(board, n, moveRow, moveCol, moveColor)) {
            printf("Valid move.\n");
            applyMove(board, n, moveRow, moveCol, moveColor);
        } else {
            printf("Invalid move.\n");
        }
    } else {
        printf("Invalid move.\n");
    }
    
    // Print the final board configuration.
    printBoard(board, n);
    
    return 0;
}

// Prints the board with column headers and row labels.
void printBoard(char board[][MAX_SIZE], int n) {
    // Print column headers.
    printf("  ");
    for (int j = 0; j < n; j++) {
        printf("%c", 'a' + j);
    }
    printf("\n");
    // Print each row with its label.
    for (int i = 0; i < n; i++) {
        printf("%c ", 'a' + i);
        for (int j = 0; j < n; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
}

// Returns true if the given (row, col) is within the board.
bool positionInBounds(int n, int row, int col) {
    return (row >= 0 && row < n && col >= 0 && col < n);
}

// Checks if placing a tile of the given color at (row, col) is legal
// in the specific direction defined by (deltaRow, deltaCol).
bool checkLegalInDirection(char board[][MAX_SIZE], int n, int row, int col, char color, int deltaRow, int deltaCol) {
    int r = row + deltaRow;
    int c = col + deltaCol;
    char opponent = (color == 'W') ? 'B' : 'W';
    
    // First cell in the direction must be the opponent's tile.
    if (!positionInBounds(n, r, c) || board[r][c] != opponent)
        return false;
    
    // Continue along the direction.
    r += deltaRow;
    c += deltaCol;
    while (positionInBounds(n, r, c)) {
        if (board[r][c] == 'U')
            return false;
        if (board[r][c] == color)
            return true;
        r += deltaRow;
        c += deltaCol;
    }
    return false;
}

// Returns true if placing a tile of 'color' at (row, col) is a legal move.
bool isLegalMove(char board[][MAX_SIZE], int n, int row, int col, char color) {
    if (board[row][col] != 'U')
        return false;
    
    for (int deltaRow = -1; deltaRow <= 1; deltaRow++) {
        for (int deltaCol = -1; deltaCol <= 1; deltaCol++) {
            if (deltaRow == 0 && deltaCol == 0)
                continue;
            if (checkLegalInDirection(board, n, row, col, color, deltaRow, deltaCol))
                return true;
        }
    }
    return false;
}

// Applies the move for the given color at (row, col) and flips opponent tiles accordingly.
void applyMove(char board[][MAX_SIZE], int n, int row, int col, char color) {
    board[row][col] = color;
    char opponent = (color == 'W') ? 'B' : 'W';
    
    // Check and flip in all 8 directions.
    for (int deltaRow = -1; deltaRow <= 1; deltaRow++) {
        for (int deltaCol = -1; deltaCol <= 1; deltaCol++) {
            if (deltaRow == 0 && deltaCol == 0)
                continue;
            if (checkLegalInDirection(board, n, row, col, color, deltaRow, deltaCol)) {
                int r = row + deltaRow;
                int c = col + deltaCol;
                // Flip opponent pieces until reaching a tile of player's color.
                while (board[r][c] == opponent) {
                    board[r][c] = color;
                    r += deltaRow;
                    c += deltaCol;
                }
            }
        }
    }
}

// Prints all legal moves for the given color in increasing row then column order.
void printAvailableMoves(char board[][MAX_SIZE], int n, char color) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (isLegalMove(board, n, i, j, color)) {
                printf("%c%c\n", 'a' + i, 'a' + j);
                found = true;
            }
        }
    }
    if (!found) {
        printf("No legal move.\n");
    }
}
