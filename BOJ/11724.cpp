#include <bits/stdc++.h>
using namespace std;
int dfs(int);

const int MX = 1000 + 1;
vector<int> v1[MX];
bool is_visited[MX];

int main(){
    int result = 0;
    int n, m;
    cin >> n >> m;

    while(m--){
        int u, v;
        cin >> u >> v;
        v1[u].push_back(v);
        v1[v].push_back(u);
    }

    for(int i = 1; i <= n; i++)
        if (!is_visited[i]) result += dfs(i);
    cout << result;
    return 0;
}

int dfs(int n){
    is_visited[n] = true;
    for(int i = 0; i < v1[n].size(); i++){
        if(!is_visited[v1[n][i]]) dfs(v1[n][i]);
    }
    return 1;
}