#include <bits/stdc++.h>
using namespace std;
int bfs(int, int);
const int MX = 26;

int n;
int is_visited[MX][MX];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
string board[MX];
queue<pair<int, int>> Q;
vector<int> V;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++) cin >> board[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (board[i][j] == '1' && !is_visited[i][j]) {
                is_visited[i][j] = 1;
                Q.push({i, j});
                V.push_back(bfs(i, j));
            }
        }
    }
    sort(V.begin(), V.end());
    cout << V.size() << '\n';
    for(auto e : V) cout << e << '\n'; 
    return 0;
}

int bfs(int x, int y){
    int cnt = 1;
    while(!Q.empty()){
        pair<int, int> cur = Q.front(); Q.pop();

        for(int i = 0; i < 4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];

            if(nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
            else if(board[nx][ny] == '0' || is_visited[nx][ny]) continue;
            else{
                is_visited[nx][ny] = 1;
                Q.push({nx, ny});
                cnt++;
            }
        }
    }
    return cnt;
}