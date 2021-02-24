#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool is_const = false;
    stack<int> s;
    string str;
    int cnt = 0;
    int r = 1;
    cin >> str;
    for(char e : str){
        if (e == '(' || e == '['){
            is_const = true;
            s.push(e);
            if (e == '(') r *= 2;
            else r *= 3;
        } else {
            if(s.empty()){
                cnt = 0;
                break;
            }
            else if(e == ')' && s.top() == '('){
                if(is_const) {
                    is_const = false;
                    cnt += r;
                }
                r /= 2;
                s.pop();
            }
            else if(e == ']' && s.top() == '['){
                if(is_const) {
                    is_const = false;
                    cnt += r;
                }
                r /= 3;
                s.pop();
            }
            else{
                cnt = 0;
                break;
            }
        }
    }
    if(!s.empty()) cnt = 0;
    cout << cnt;
    return 0;
}