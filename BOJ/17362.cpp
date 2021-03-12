#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    if (n <= 5) cout << n;
    else {
        while(n > 5)
            n -= 8;
        if (n <= 0)
            n = 2 - n;
        cout << n;
    }
    return 0;
}