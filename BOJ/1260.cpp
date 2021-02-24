#include <bits/stdc++.h>
using namespace std;
void bfs(int);
void dfs(int);

const int MX = 1001;
vector<int> node[MX];
vector<int> bfs_queue;
bool bfs_visited[MX];
bool dfs_visited[MX];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, v;
    cin >> n >> m >> v;

    while(m--){
        int n1, n2;
        cin >> n1 >> n2;
        node[n1].push_back(n2);
        node[n2].push_back(n1);
    }

    for(int i = 0; i < n ; i++)
        sort(node[i].begin(), node[i].end());

    dfs(v);
    cout << '\n';
    cout << v << ' ';
    bfs(v);
    return 0;
}

void bfs(int n){
    bfs_visited[n] = true;
    for(int i = 0; i < node[n].size(); i++){
        if(!bfs_visited[node[n][i]]){
            cout << node[n][i] << ' ';
            bfs_queue.push_back(node[n][i]);
            bfs_visited[node[n][i]] = true;
        }
    }
    if(!bfs_queue.size()) return;
    else{
        int tmp = bfs_queue[0];
        bfs_queue.erase(bfs_queue.begin());
        bfs(tmp);
    }
}
void dfs(int n){
    cout << n << ' ';
    dfs_visited[n] = true;
    for(int i = 0; i < node[n].size(); i++){
        if(!dfs_visited[node[n][i]]){
            dfs(node[n][i]);
        }
    }
}