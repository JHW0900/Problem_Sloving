#include <bits/stdc++.h>
using namespace std;
int bfs();

int n, m;
int board[1001][1001];
int is_visited[1001][1001];
queue<pair<int, int>> Q;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cnt = 0;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> board[i][j];
            if(board[i][j] == 1){
                Q.push({i, j});
                is_visited[i][j] = 1;
            }
        }
    }
    cnt += bfs();
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if (board[i][j] == 0){
                cout << -1;
                return 0;
            }
        }
    }
    if(!cnt) cout << cnt;
    else cout << cnt - 1;
    return 0;
}

int bfs(){
    int cnt = 0;
    while(!Q.empty()){
        pair<int, int> t = Q.front(); Q.pop();
        for(int i = 0; i < 4; i++){
            int nx = t.first + dx[i];
            int ny = t.second + dy[i];
            if(nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
            else if(is_visited[nx][ny] || board[nx][ny] == -1) continue;
            else {
                Q.push({nx, ny});
                is_visited[nx][ny] = 1;
                board[nx][ny] = board[t.first][t.second] + 1;
                cnt = cnt > board[nx][ny] ? cnt : board[nx][ny];
            }
        }
    }
    return cnt;
}