#include <bits/stdc++.h>
using namespace std;
int bfs();

int t, n, m, k;
int board[51][51];
int is_visited[51][51];
queue<pair<int, int>> Q;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--) {
        int cnt = 0;

        cin >> m >> n >> k;
        for(int i = 0; i < n; i++){
            fill(board[i], board[i] + m, 0);
            fill(is_visited[i], is_visited[i] + m, 0);
        }
        for (int i = 0; i < k; i++) {
            int x, y;
            cin >> y >> x;
            board[x][y] = 1;
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(board[i][j] && !is_visited[i][j]){
                    Q.push({i, j});
                    cnt += bfs();
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}

int bfs(){
    while(!Q.empty()){
        pair<int, int> cur = Q.front(); Q.pop();
        for(int i = 0; i < 4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            else if(!board[nx][ny] || is_visited[nx][ny]) continue;
            else {
                is_visited[nx][ny] = 1;
                Q.push({nx, ny});
            }
        }
    }
    return 1;
}