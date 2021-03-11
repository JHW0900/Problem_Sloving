#include <bits/stdc++.h>
using namespace std;
void reverse(long long, long long, long long);
long long gcd(long long, long long);
vector<long long> v;
long long p, q;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, num, t;
    cin >> n;
    while(n--){
        cin >> num;
        v.push_back(num);
    }
    reverse(v.size() - 2, 1, v[v.size() - 1]);
    p = q - p;
    t = gcd(p, q);
    p /= t;
    q /= t;
    cout << p << ' ' << q;
    return 0;
}

void reverse(long long i, long long a, long long b){
    a += (v[i] * b);
    if(i == 0) {
        p = b;
        q = a;
        return;
    }
    reverse(i - 1, b, a);
}

long long gcd(long long a, long long b){
    if(a % b == 0) return b;
    return gcd(b, a % b);
}