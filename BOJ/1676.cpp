#include <bits/stdc++.h>
using namespace std;
int divide(int, int);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int t = 0, f = 0;
    cin >> n;

    while(n){
        if (n % 5 == 0) f += divide(n, 5);
        if (n % 2 == 0) t += divide(n, 2);
        n--;
    }

    cout << (t < f ? t : f);

    return 0;
}

int divide(int n, int d){
    int cnt = 0;

    while(!(n % d)) {
        n /= d;
        cnt++;
    }
    return cnt;
}