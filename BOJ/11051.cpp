#include <bits/stdc++.h>
using namespace std;
int dp[1000 + 5][1000 + 5];
int bino(int, int);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    cout << bino(n, k);
    return 0;
}

int bino(int n, int k){
    if(n == k || k == 0) return 1;
    if(dp[n][k] > 0) return dp[n][k];
    dp[n][k] = ((bino(n - 1, k) + bino(n - 1, k - 1))) % 10007;
    return dp[n][k];
}