#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string str;
    cin >> n;
    while(n--){
        cin >> str;
        int len = str.length();
        if(len > 10)
            cout << str[0] << len - 2 << str[len - 1];
        else cout << str;
        cout << '\n';
    }
    return 0;
}