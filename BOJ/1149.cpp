#include <bits/stdc++.h>
using namespace std;

int dp[1001][5];
int R[1001];
int G[1001];
int B[1001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int result;
    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> R[i] >> G[i] >> B[i];
    
    dp[1][1] = R[1];
    dp[1][2] = G[1];
    dp[1][3] = B[1];

    for(int i = 2; i <= n; i++){
        dp[i][1] = min(dp[i - 1][2], dp[i - 1][3]) + R[i];
        dp[i][2] = min(dp[i - 1][1], dp[i - 1][3]) + G[i];
        dp[i][3] = min(dp[i - 1][2], dp[i - 1][1]) + B[i];
    }
    
    result = min(dp[n][1], dp[n][2]);
    result = min(result, dp[n][3]);

    cout << result;

    return 0;
}