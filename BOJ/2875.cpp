#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    int total = n + m - k;
    int amt = 0;
    while(n > 1 && m > 0 && total > 2){
        n -= 2;
        m -= 1;
        total -= 3;
        amt++;
    }

    cout << amt;
    return 0;
}