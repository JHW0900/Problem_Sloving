#include <bits/stdc++.h>
using namespace std;
const int MX = 987654321;
int dp[50000 + 5];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    dp[0] = 0;
    dp[1] = 1;

    int n;
    cin >> n;

    for(int j = 2; j <= n; j++){
        int cnt = MX;
        for(int i = 1; i*i <= j; i++){
            cnt = min(cnt, dp[j - i*i] + 1);
        }
        dp[j] = cnt;
    }

    cout << dp[n];
    return 0;
}