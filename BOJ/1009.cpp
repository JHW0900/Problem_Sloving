#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int a, b;
        long long n = 1;
        cin >> a >> b;
        for(int i = 0; i < b; i++){
            n *= a;
            n %= 10;
        }

        if (n % 10 == 0) cout << 10 << '\n';
        else cout << n % 10 << '\n';
    }
    return 0;
}