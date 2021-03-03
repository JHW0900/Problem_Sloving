#include <bits/stdc++.h>
using namespace std;
int bfs(int);
const int MX = 101;

int n;
int maxi = 0, mini = 101;
int board[MX][MX];
int is_visited[MX][MX];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
queue<pair<int, int>> Q;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt = 0, sol = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> board[i][j];
            if (board[i][j] > maxi) maxi = board[i][j];
        }
    }

    for(int i = 0; i <= maxi; i++){
        cnt = 0;

        for(int j = 0; j < n; j++) 
            fill(is_visited[j], is_visited[j] + MX, 0);
        
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(board[j][k] > i && !is_visited[j][k]){
                    is_visited[j][k] = 1;
                    Q.push({j, k});
                    cnt += bfs(i);
                }
            }
        }
        sol = sol < cnt ? cnt : sol;
    }

    cout << sol;
    return 0;
}

int bfs(int lim){
    while(!Q.empty()){
        pair<int, int> cur = Q.front(); Q.pop();
        for(int i = 0; i < 4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];

            if(nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
            else if(board[nx][ny] <= lim || is_visited[nx][ny]) continue;
            else {
                is_visited[nx][ny] = 1;
                Q.push({nx, ny});
            }
        }
    }
    return 1;
}