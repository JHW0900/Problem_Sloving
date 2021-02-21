#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string txt;
    int cnt;
    list<char> L;
    cin >> txt >> cnt;
    for(int i = 0; i < txt.size(); i++){
        L.push_back(txt[i]);
    }
    auto t = L.end();
    while(cnt--){
        string cmd;
        cin >> cmd;
        if (cmd[0] == 'P'){
            cin >> cmd;
            L.insert(t, cmd[0]);
        }
        else if (cmd[0] == 'B' && t != L.begin()) {
            t--;
            t = L.erase(t);
        }
        else if (cmd[0] == 'L' && t != L.begin()) t--;
        else if (cmd[0] == 'D' && t != L.end()) t++;
    }

    for(auto i : L) cout << i;
    return 0;
}