#include <bits/stdc++.h>
using namespace std;
int bfs();

queue<pair<int, int>> Q;
int n, m;
int cnt = 0, mx = 0;
int board[501][501];
int is_visited[501][501];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!is_visited[i][j] && board[i][j]){
                Q.push({i, j});
                is_visited[i][j] = 1;
                mx = max(mx, bfs());
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    cout << mx;
    return 0;
}

int bfs(){
    int size = 1;
    while(!Q.empty()){
        pair<int, int> cur = Q.front(); Q.pop();
        for(int i = 0; i < 4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            else if (is_visited[nx][ny]) continue;
            else if (board[nx][ny]){
                Q.push({nx, ny});
                is_visited[nx][ny] = 1;
                size++;
            }
        }
    }
    return size;
}