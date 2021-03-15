#include <bits/stdc++.h>
using namespace std;
queue<int> Q;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    int cnt = 0;
    cin >> n >> k;

    for(int i = 1; i <= n; i++) Q.push(i);

    cout << '<';
    while(!Q.empty()){
        cnt++;
        if(cnt == k) {
            cnt = 0;
            cout << Q.front();
            Q.pop();
            if(!Q.empty()) cout << ", ";
        } else {
            Q.push(Q.front());
            Q.pop();
        }
    }
    cout << '>';
    return 0;
}