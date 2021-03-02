#include <bits/stdc++.h>
using namespace std;
const int MX = 301;

int board[MX][MX];
int dist[MX][MX];
int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
queue<pair<int, int>> Q;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, l;
    cin >> t;

    while(t--){
        pair<int, int> goal;
        int x, y;

        cin >> l;
        for(int i = 0; i < l; i++) fill(dist[i], dist[i]+MX, -1);
        cin >> x >> y;
        dist[x][y] = 0;
        cin >> goal.first >> goal.second;
        Q.push({x, y});
        
        while(!Q.empty()){
            pair<int, int> cur = Q.front(); Q.pop();

            for(int i = 0; i < 8; i++){
                int nx = cur.first + dx[i];
                int ny = cur.second + dy[i];

                if(nx < 0 || ny < 0 || nx >= l || ny >= l) continue;
                else if(dist[nx][ny] >= 0) continue;
                else {
                    dist[nx][ny] = dist[cur.first][cur.second] + 1;
                    Q.push({nx, ny});
                }
            }
        }
        cout << dist[goal.first][goal.second] << '\n';
    }
    return 0;
}