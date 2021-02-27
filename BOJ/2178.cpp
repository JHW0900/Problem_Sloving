#include <bits/stdc++.h>
using namespace std;
void bfs();

int n, m;
int board[101][101];
int is_visited[101][101];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
queue<pair<int, int>> Q;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        string line;
        cin >> line;
        for(int j = 0; j < m; j++)
            board[i][j] = line[j] - '0';
    }
    bfs();
    cout << board[n-1][m-1];
    return 0;
}

void bfs(){
    Q.push({0, 0});
    is_visited[0][0] = 1;
    while(!Q.empty()){
        pair<int, int> t = Q.front(); Q.pop();
        for(int i = 0; i < 4; i++){
            int nx = t.first + dx[i];
            int ny = t.second + dy[i];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            else if(is_visited[nx][ny] || !board[nx][ny]) continue;
            else {
                Q.push({nx, ny});
                board[nx][ny] = board[t.first][t.second] + 1;
                is_visited[nx][ny] = 1;
            }
        }
    }
}