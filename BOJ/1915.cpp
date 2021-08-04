#include <bits/stdc++.h>
using namespace std;

int arr[1001][1001];
int dp[1001][1001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    int result = 0;
    
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        string s;
        cin >> s;
        for(int j = 1; j <= m; j++)
            arr[i][j] = s[j - 1] - '0';
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i == 1 || j == 1) dp[i][j] = arr[i][j];

            else if(arr[i][j])
                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i][j - 1], dp[i - 1][j])) + 1;

            result = max(result, dp[i][j]);
        }
    }

    cout << result * result;

    return 0;
}