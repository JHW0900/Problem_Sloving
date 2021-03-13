#include <bits/stdc++.h>
using namespace std;
int gcd(int, int);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n;
    cin >> m >> n;
    m = abs(m);
    n = abs(n);
    if (m > n) swap(m, n);
    if(m == 0 && n == 0) cout << 0;
    else if (gcd(m, n) == 1) cout << 1;
    else cout << 2;
    return 0;
}

int gcd(int a, int b){
    if(a % b == 0) return b;
    return gcd(b, a % b);
}