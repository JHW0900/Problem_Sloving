#include <bits/stdc++.h>
using namespace std;
long long a, b, c;
long long pow(long long, long long);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b >> c;

    cout << pow(a % c, b);
    return 0;
}

long long pow(long long a, long long b){
    if(b == 0) return 1;

    long long n = pow(a, b / 2);
    long long m = (n * n) % c;

    if (b % 2 == 0) return m;
    else return (a * m) % c;
}