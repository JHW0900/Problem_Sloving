#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n[3], max = 0;
    for(int i = 0; i < 3; i++){
        cin >> n[i];
        if (max < n[i]) max = n[i];
    }

    if (n[0] == n[1] && n[1] == n[2])
        cout << (10000 + n[0] * 1000);
    else if (n[0] == n[1] || n[0] == n[2])
        cout << (1000 + n[0] * 100);
    else if (n[1] == n[2])
        cout << (1000 + n[1] * 100);
    else cout << (max * 100);

    return 0;
}