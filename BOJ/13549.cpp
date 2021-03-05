#include <bits/stdc++.h>
using namespace std;
const int MX = 1e5 + 5;

int dist[MX];
queue<int> Q;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill(dist, dist + MX, -1);

    int n, k;
    cin >> n >> k;
    Q.push(n);
    dist[n] = 0;

    while(!Q.empty()){
        int cur = Q.front(); Q.pop();

        for(int e : {cur - 1, cur + 1, 2*cur}){
            if (e < 0 || e > MX) continue;
            else if (dist[e] != -1 && dist[e] <= dist[cur]) continue;
            else {
                if (e == 2*cur){
                    dist[e] = dist[cur];
                    Q.push(e);
                } else {
                    dist[e] = dist[cur] + 1;
                    Q.push(e);
                }
            }
        }
    }
    cout << dist[k];
    return 0;
}