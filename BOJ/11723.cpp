#include <bits/stdc++.h>
using namespace std;
int check(int);
void all();
vector<int> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, num;
    string cmd;
    cin >> m;
    while(m--){
        cin >> cmd;
        if(cmd == "add"){
            cin >> num;
            if(check(num) == -1)
                v.push_back(num);
        }
        else if(cmd == "remove"){
            cin >> num;
            if(check(num) != -1)
                v.erase(v.begin() + check(num));
        }
        else if(cmd == "check"){
            cin >> num;
            if(check(num) == -1) cout << 0 << '\n';
            else cout << 1 << '\n';
        }
        else if(cmd == "toggle"){
            cin >> num;
            if(check(num) == -1) v.push_back(num);
            else v.erase(v.begin() + check(num));
        }
        else if(cmd == "all") all();
        else if(cmd == "empty") v.clear();
    }
    return 0;
}

int check(int n){
    for(int i = 0; i < v.size(); i++)
        if (n == v[i]) return i;
    return -1;
}

void all(){
    v.clear();
    for(int i = 0; i < 20; i++){
        v.push_back(i + 1);
    }
}