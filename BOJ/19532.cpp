#include <bits/stdc++.h>
using namespace std;
int gcd(int, int);
int lcm(int, int);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, d, e, f;
    int x, y;
    cin >> a >> b >> c >> d >> e >> f;

    x = (c*e - b*f) / (a*e - b*d);
    y = (c*d - a*f) / (b*d - a*e);
    cout << x << ' ' << y;
    return 0;
}