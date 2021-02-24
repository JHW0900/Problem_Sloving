#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<char> s;
    bool is_laser = false;
    string cmd;
    int cnt = 0;

    cin >> cmd;
    for(char e : cmd){
        if(e == '('){
            is_laser = true;
            s.push(e);
        }
        else if (e == ')'){
            if(is_laser){
                s.pop();
                cnt += s.size();
                is_laser = false;
            } else {
                s.pop();
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}