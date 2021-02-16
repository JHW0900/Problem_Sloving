#include <bits/stdc++.h>
using namespace std;
long long fibo(long long);
long long dp[91];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    dp[0] = 0;
    dp[1] = 1;

    long long n;
    cin >> n;
    cout << fibo(n);

    return 0;
}

long long fibo(long long n){
    if (n < 2) return n;
    else if(dp[n] == 0) 
        dp[n] = fibo(n - 1) + fibo(n - 2);
    return dp[n];
}