#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string, string> pw;

    int n, m;
    string name, pass;

    cin >> n >> m;
    while(n--){
        cin >> name >> pass;
        pw[name] = pass;
    }
    while(m--){
        cin >> name;
        cout << pw[name] << '\n';
    }
    return 0;
}