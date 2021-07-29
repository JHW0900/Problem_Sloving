#include <bits/stdc++.h>
using namespace std;
int sol(int);

int n, result;
int t[20], p[20];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for(int i = 1; i < (n + 1); i++)
        cin >> t[i] >> p[i];
    
    for(int i = n; i >= 1 ; i--){
        if ((i + t[i]) > (n + 1)) p[i] = p[i + 1];
        p[i] = max(p[i+1], p[i] + p[i + t[i]]);
        result = max(p[i], result);
    }
    cout << result;
}