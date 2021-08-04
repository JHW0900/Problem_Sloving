#include <bits/stdc++.h>
using namespace std;
int dp[1000001][5];
int D[1000001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int result;

    cin >> n;

    D[1] = 0;

    for(int i = 2; i <= n; i++){
        dp[i][1] = (i % 3) == 0 ? i / 3 : 0;
        dp[i][2] = (i % 2) == 0 ? i / 2 : 0;
        dp[i][3] = i - 1;

        D[i] = D[i - 1] + 1;
        if(i % 2 == 0) D[i] = min(D[i], D[i/2] + 1);
        if(i % 3 == 0) D[i] = min(D[i], D[i/3] + 1);
    }

    cout << D[n] << '\n';

    while(n > 1) {
        cout << n << ' ';
        
        if((D[n] - 1) == D[dp[n][1]]) n = dp[n][1];
        else if ((D[n] - 1) == D[dp[n][2]]) n = dp[n][2];
        else n = dp[n][3];
    }

    cout << 1;
    
    return 0;
}