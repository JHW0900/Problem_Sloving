#include <bits/stdc++.h>
using namespace std;
int fibo(int);
int dp[45];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    dp[0] = 0;
    dp[1] = 1;

    int n;
    cin >> n;
    cout << fibo(n);

    return 0;
}

int fibo(int n){
    if (n < 2) return dp[n];
    else if (dp[n] == 0) 
        dp[n] = fibo(n - 1) + fibo(n - 2);
    return dp[n];
}