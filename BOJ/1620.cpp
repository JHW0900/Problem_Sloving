#include <bits/stdc++.h>
using namespace std;
string v[100001];
map<string, int> v2;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> v[i];
        v2[v[i]] = i;
    }
    while(m--){
        string odr;
        cin >> odr;

        if(odr[0] >= '0' && odr[0] <= '9')
            cout << v[stoi(odr) - 1] << '\n';
        else {
            cout << v2[odr] + 1 << '\n';
        }
    }
    return 0;
}