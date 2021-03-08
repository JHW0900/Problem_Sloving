#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, a, b;
    cin >> t;
    while(t--){
        char splt;
        cin >> a >> splt >> b;
        cout << a + b << '\n';
    }
    return 0;
}