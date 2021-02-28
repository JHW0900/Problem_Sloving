#include <bits/stdc++.h>
using namespace std;

int n, m;
string board[1001];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int dist1[1001][1001];
int dist2[1001][1001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int, int>> Q1;
    queue<pair<int, int>> Q2;

    cin >> n >> m;
    for(int i = 0; i < n ; i++){
        fill(dist1[i], dist1[i] + m, -1);
        fill(dist2[i], dist2[i] + m, -1);
    }
    for(int i = 0; i < n; i++){
        cin >> board[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(board[i][j] == 'J'){
                Q2.push({i, j});
                dist2[i][j] = 0;
            }
            else if(board[i][j] == 'F'){
                Q1.push({i, j});
                dist1[i][j] = 0;
            }
        }
    }
    while(!Q1.empty()){
        pair<int, int> cur = Q1.front(); Q1.pop();
        for(int i = 0; i < 4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];

            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            else if(board[nx][ny] == '#' || dist1[nx][ny] >= 0) continue;
            else {
                dist1[nx][ny] = dist1[cur.first][cur.second] + 1;
                Q1.push({nx, ny});
            }
        }
    }
    while(!Q2.empty()){
        pair<int, int> cur = Q2.front(); Q2.pop();
        for(int i = 0; i < 4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];

            if(nx < 0 || ny < 0 || nx >= n || ny >= m){
                cout << dist2[cur.first][cur.second] + 1;
                return 0;
            }
            else if(board[nx][ny] == '#' || dist2[nx][ny] >= 0) continue;
            else if(dist1[nx][ny] != -1 && 
                (dist2[cur.first][cur.second] + 1) >= dist1[nx][ny]) continue;
            else {
                dist2[nx][ny] = dist2[cur.first][cur.second] + 1;
                Q2.push({nx, ny});
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}