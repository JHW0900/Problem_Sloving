#include <bits/stdc++.h>
using namespace std;
int dp[1024][1024];

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    for(int i = 1; i < str2.size() + 1; i++){
        for(int j = 0; j < str1.size(); j++){
            if (str2[i-1] == str1[j])
                dp[i][j] = (j - 1) < 0 ? 
                    1 : dp[i - 1][j - 1] + 1;
            else dp[i][j] = (j - 1) < 0 ?
                    dp[i - 1][j] : max(dp[i - 1][j], 
                                        dp[i][j - 1]);
        }
    }

    cout << dp[str2.size()][str1.size()-1];
    return 0;
}