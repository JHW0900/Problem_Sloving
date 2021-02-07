#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x, z;
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> z;
        if (z < x) cout << z << ' ';
    }
}