#include <bits/stdc++.h>
using namespace std;
int facto(int);
int dp[50];

int main(){
    dp[0] = 1;
    int n, k;
    cin >> n >> k;

    cout << facto(n) / (facto(k) * facto(n - k));
    return 0;
}

int facto(int n){
    if (dp[n] == 0) dp[n] = n * facto(n - 1);
    return dp[n];
}