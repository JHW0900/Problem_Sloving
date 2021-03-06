#include <bits/stdc++.h>
using namespace std;
int gcd(int, int);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    int a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << (a*b) / gcd(a, b) << '\n';
    }
    return 0;
}

int gcd(int a, int b){
    if(a%b == 0) return b;
    return gcd(b, a % b);
}