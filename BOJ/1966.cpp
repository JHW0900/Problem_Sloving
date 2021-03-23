#include <bits/stdc++.h>
using namespace std;
int priority[10];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    int n, m;
    int result;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int cnt = 0;
        queue<pair<int, int>> Q;
        fill(priority, priority + 10, 0);

        for(int i = 0; i < n; i++){
            int docs;
            cin >> docs;
            Q.push({docs, i});
            priority[docs]++;
        }

        for(int i = 9; i > 0; i--){
            while(priority[i]){
                pair<int, int> cur = Q.front(); Q.pop();
                if(cur.first == i){
                    priority[i]--;
                    cnt++;
                    if(cur.second == m) result = cnt;
                }
                else Q.push(cur);
            }
        }
        cout << result << '\n';
    }
    return 0;
}