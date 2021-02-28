#include <bits/stdc++.h>
using namespace std;
const int MX = 1e5 + 2;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    int dist[MX];
    queue<int> Q;
    cin >> n >> k;
    fill(dist, dist + MX, -1);
    dist[n] = 0;
    Q.push(n);

    while(dist[k] == -1) {
        int cur = Q.front(); Q.pop();
        for(int nxt : {cur-1, cur+1, 2*cur}) {
            if(nxt < 0 || nxt > MX) continue;
            if(dist[nxt] != -1) continue;
            dist[nxt] = dist[cur] + 1;
            Q.push(nxt);
        }
    }
    cout << dist[k];
    return 0;
}