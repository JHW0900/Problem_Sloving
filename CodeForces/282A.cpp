#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    int n = 0;
    cin >> t;
    while(t--){
        string cmd;
        cin >> cmd;
        if (cmd == "++X") ++n;
        else if (cmd == "X++") n++;
        else if (cmd == "--X") --n;
        else if (cmd == "X--") n--;
    }
    cout << n;
    return 0;
}