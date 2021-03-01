#include <bits/stdc++.h>
using namespace std;
const int MX = 100 + 2;

int m, n, h;
int board[MX][MX][MX];
int dx[6] = {0, 0, -1, 1, 0, 0};
int dy[6] = {-1, 1, 0, 0, 0, 0};
int dz[6] = {0, 0, 0, 0, -1, 1};
int dist[MX][MX][MX];
queue<pair<pair<int, int>, int>> Q;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n >> h;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                cin >> board[i][j][k];
                if(board[i][j][k] == 1){
                    dist[i][j][k] = 0;
                    Q.push({{i, j}, k});
                }
                else if(board[i][j][k] == 0){
                    dist[i][j][k] = -1;
                }
            }
        }
    }

    while(!Q.empty()){
        pair<pair<int, int>, int> cur = Q.front(); Q.pop();
        for(int i = 0; i < 6; i++){
            int nx = cur.first.second + dx[i];
            int ny = cur.second + dy[i];
            int nz = cur.first.first + dz[i];

            if(nx < 0 || ny < 0 || nz < 0 || nx >= n || ny >= m || nz >= h) continue;
            else if(dist[nz][nx][ny] >= 0) continue;
            else {
                dist[nz][nx][ny] = dist[cur.first.first][cur.first.second][cur.second] + 1;
                Q.push({{nz, nx}, ny});
            }
        }
    }

    int sol = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                if(dist[i][j][k] == -1){
                    cout << -1;
                    return 0;
                }
                sol = max(sol, dist[i][j][k]);
            }
        }
    }
    cout << sol;
    return 0;
}