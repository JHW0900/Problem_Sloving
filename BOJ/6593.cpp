#include <bits/stdc++.h>
using namespace std;
const int MX = 30 + 5;
void bfs();

string board[MX][MX];
int l, r, c;
int dist[MX][MX][MX];
int dz[6] = {-1, 1, 0, 0, 0, 0};
int dy[6] = {0, 0, -1, 1, 0, 0};
int dx[6] = {0, 0, 0, 0, -1, 1};
queue<pair<int, pair<int, int>>> Q;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(true){
        int minute = -1;
        cin >> l >> r >> c;
        if(l == 0 && r == 0 && c == 0) break;

        for(int i = 0; i < l; i++){
            for(int j = 0; j < r; j++){
                fill(dist[i][j], dist[i][j] + MX, -1);
                cin >> board[i][j];
                for(int k = 0; k < c; k++){
                    if (board[i][j][k] == 'S'){
                        Q.push({i, {j, k}});
                        dist[i][j][k] = 0;
                    }
                }
            }
        }
        bfs();
        for(int i = 0; i < l; i++){
            for(int j = 0; j < r; j++){
                for(int k = 0; k < c; k++){
                    if (board[i][j][k] == 'E') minute = dist[i][j][k];
                }
            }
        }
        if(minute == -1) cout << "Trapped!\n";
        else cout << "Escaped in " << minute << " minute(s).\n";
    }
    return 0;
}

void bfs(){
    while(!Q.empty()){
        pair<int, pair<int, int>> cur = Q.front(); Q.pop();

        for(int i = 0; i < 6; i++){
            int nx = cur.second.second + dx[i];
            int ny = cur.second.first + dy[i];
            int nz = cur.first + dz[i];

            if(nx < 0 || ny < 0 || nz < 0 || nx >= c || ny >= r || nz >= l) continue;
            else if (dist[nz][ny][nx] >= 0 || board[nz][ny][nx] == '#') continue;
            else {
                dist[nz][ny][nx] = dist[cur.first][cur.second.first][cur.second.second] + 1;
                Q.push({nz, {ny, nx}});
            }
        }
    }
}