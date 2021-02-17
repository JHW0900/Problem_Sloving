#include <bits/stdc++.h>
using namespace std;
int plus_count(int);
int dp[12];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        cout << plus_count(n) << '\n';
    }
    return 0;
}

int plus_count(int n){
    if (n < 4) return dp[n];
    else if (dp[n] == 0) 
        dp[n] = plus_count(n-1) + plus_count(n-2) 
            + plus_count(n-3);
    return dp[n];
}