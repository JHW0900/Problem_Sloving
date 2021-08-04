#include <bits/stdc++.h>
using namespace std;
int func(int);

int dp[301][5];
int S[301];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int amt;

    cin >> amt;
    for(int i = 1; i <= amt; i++)
        cin >> S[i];
    
    dp[1][1] = S[1];
    dp[1][2] = 0;
    dp[2][1] = S[2];
    dp[2][2] = S[1] + S[2];

    for(int i = 3; i <= amt; i++){
        dp[i][1] = max(dp[i - 2][1], dp[i - 2][2]) + S[i];
        dp[i][2] = dp[i - 1][1] + S[i];
    }

    cout << max(dp[amt][1], dp[amt][2]);

    return 0;
}