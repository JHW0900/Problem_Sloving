#include <bits/stdc++.h>
using namespace std;
int gcd(int, int);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, t;
    cin >> a >> b;
    t = gcd(a, b);

    cout << (b - a) / t << ' ' << b / t;
    return 0;
}

int gcd(int a, int b){
    if(a % b == 0) return b;
    return gcd(b, a % b);
}