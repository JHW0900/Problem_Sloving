#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    int a2, b2;
    cin >> a >> b;
    cin >> a2 >> b2;

    a = a * b2 + a2 * b;
    b *= b2;

    int g = gcd(a, b);

    cout << a/g << ' ' << b/g;

    return 0;
}

int gcd(int a, int b){
    int c = a % b;
    if (c == 0) return b;
    return gcd(b, c);
}