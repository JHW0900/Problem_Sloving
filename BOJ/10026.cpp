#include <bits/stdc++.h>
using namespace std;
const int MX = 100 + 5;

string board[MX];
int is_visited[MX][MX];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
queue<pair<int, int>> Q;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> board[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!is_visited[i][j]) {
                Q.push({i, j});
                is_visited[i][j] = 1;
                cnt++;
                while(!Q.empty()){
                    pair<int, int> cur = Q.front(); Q.pop();

                    for(int i = 0; i < 4; i++){
                        int nx = cur.first + dx[i];
                        int ny = cur.second + dy[i];

                        if(nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
                        else if (is_visited[nx][ny] || board[cur.first][cur.second] != board[nx][ny]) continue;
                        else {
                            Q.push({nx, ny});
                            is_visited[nx][ny] = 1;
                        }
                    }
                }
            }
        }
    }
    cout << cnt << ' ';
    cnt = 0;
    for(int i = 0; i < n; i++)
        fill(is_visited[i], is_visited[i] + MX, 0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!is_visited[i][j]) {
                Q.push({i, j});
                is_visited[i][j] = 1;
                cnt++;
                while(!Q.empty()){
                    pair<int, int> cur = Q.front(); Q.pop();

                    for(int i = 0; i < 4; i++){
                        int nx = cur.first + dx[i];
                        int ny = cur.second + dy[i];
                        char cur_color = board[cur.first][cur.second];

                        if(nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
                        else if (is_visited[nx][ny]) continue;
                        else if (cur_color == 'B' && cur_color != board[nx][ny]) continue;
                        else if ((cur_color == 'R' || cur_color == 'G') && board[nx][ny] == 'B') continue;
                        else {
                            Q.push({nx, ny});
                            is_visited[nx][ny] = 1;
                        }
                    }
                }
            }
        }
    }
    cout << cnt << ' ';
    return 0;
}