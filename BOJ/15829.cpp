#include <bits/stdc++.h>
using namespace std;
const int r = 31, m = 1234567891;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l;
    string alpha;
    long long hash = 0;
    long long ri = 1;
    cin >> l >> alpha;
    for(int i = 0; i < alpha.size(); i++){
        int a = (alpha[i] - 'a' + 1);
        hash = (hash + (a * ri)) % m;
        ri = (ri * r) % m;
    }
    cout << hash;
    return 0;
}