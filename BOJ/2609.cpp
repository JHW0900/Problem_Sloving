#include <bits/stdc++.h>
using namespace std;
int gcd(int, int);
int lcm(int, int);

int main(){
    int a, b;
    cin >> a >> b;

    if (a < b) swap(a, b);
    cout << gcd(a, b) << '\n' << lcm(a, b);

    return 0;
}

int gcd(int a, int b){
    if(!b) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b){
    return a * b / gcd(a, b);
}