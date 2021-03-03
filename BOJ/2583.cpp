#include <bits/stdc++.h>
using namespace std;
const int MX = 101;

int cnt = 0;
int m, n, k;
int board[MX][MX];
int visited[MX][MX];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
queue<pair<int, int>> Q;
vector<int> len;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n >> k;
    while(k--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = x1; i < x2; i++){
            for(int j = y1; j < y2; j++){
                board[i][j] = 1;
                visited[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (!visited[i][j] && !board[i][j]){
                visited[i][j] = 1;
                Q.push({i, j});
                cnt = 1;
            } else continue;
            while (!Q.empty()) {
                pair<int, int> cur = Q.front();
                Q.pop();
                for (int i = 0; i < 4; i++) {
                    int nx = cur.first + dx[i];
                    int ny = cur.second + dy[i];

                    if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                    else if (board[nx][ny] || visited[nx][ny]) continue;
                    else {
                        Q.push({nx, ny});
                        visited[nx][ny] = 1;
                        cnt++;
                    }
                }
            }
            if (cnt != 0) len.push_back(cnt);
            cnt = 0;
        }
    }
    sort(len.begin(), len.end());
    cout << len.size() << '\n';
    for(auto e : len) cout << e << ' ';
    return 0;
}