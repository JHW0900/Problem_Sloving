#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        string cmd;
        cin >> cmd;
        if(cmd == "push"){
            int num;
            cin >> num;
            v.push_back(num);
        }
        else if(cmd == "front"){
            if (!v.size()) cout << -1 << '\n';
            else cout << v[0] << '\n';
        }
        else if(cmd == "back"){
            if (!v.size()) cout << -1 << '\n';
            else cout << v[v.size() - 1] << '\n';
        }
        else if(cmd == "empty"){
            if (!v.size()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(cmd == "size")
            cout << v.size() << '\n';
        else if(cmd == "pop"){
            if (!v.size()) cout << -1 << '\n';
            else{
                int num = v[0];
                v.erase(v.begin());
                cout << num << '\n';
            }
        }
    }
    return 0;
}