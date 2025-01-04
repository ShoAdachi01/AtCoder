#include <bits/stdc++.h>
using namespace std;

static const int INF = -1;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H, W;
    cin >> H >> W;

    vector<string> grid(H);
    for(int i = 0; i < H; i++){
        cin >> grid[i];
    }

    int sr = -1, sc = -1, gr = -1, gc = -1;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(grid[i][j] == 'S'){
                sr = i; sc = j;
            } else if(grid[i][j] == 'G'){
                gr = i; gc = j;
            }
        }
    }

    static int dist[1001][1001][2];
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            dist[i][j][0] = INF;
            dist[i][j][1] = INF;
        }
    }
    queue<array<int,3>>q;
    dist[sr][sc][0] = 0;
    dist[sr][sc][1] = 0;
    q.push({sr, sc, 0});
    q.push({sr, sc, 1});

    vector<pair<int,int>> vmove = {{1,0},{-1,0}};
    vector<pair<int,int>> hmove = {{0,1},{0,-1}};

    int ans = -1;
    while(!q.empty()){
        auto [r, c, d] = q.front();
        q.pop();
        if(r == gr && c == gc){
            ans = dist[r][c][d];
            break;
        }
        if(d == 0){
            for(auto &m : vmove){
                int nr = r + m.first;
                int nc = c + m.second;
                if(nr < 0 || nr >= H || nc < 0 || nc >= W) continue;
                if(grid[nr][nc] == '#') continue; 
                if(dist[nr][nc][1] == INF){
                    dist[nr][nc][1] = dist[r][c][0] + 1;
                    q.push({nr, nc, 1});
                }
            }
        } else {
            for(auto &m : hmove){
                int nr = r + m.first;
                int nc = c + m.second;
                if(nr < 0 || nr >= H || nc < 0 || nc >= W) continue;
                if(grid[nr][nc] == '#') continue;
                if(dist[nr][nc][0] == INF){
                    dist[nr][nc][0] = dist[r][c][1] + 1;
                    q.push({nr, nc, 0});
                }
            }
        }
    }

    cout << ans << "\n";
    return 0;
}
