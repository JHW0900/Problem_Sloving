#include <bits/stdc++.h>
using namespace std;
int D();
bool r;

deque<string> dq;
deque<string> tmp;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, l;
    bool is_error;
    string cmd, num, tmp;
    cin >> t;
    while(t--){
        cin >> cmd;
        cin >> l;
        cin >> num;
        r = false;
        tmp = "";
        is_error = false;
        for(char e : num){
            if('0' <= e && e <= '9')
                tmp += e;
            else if (tmp != ""){
                dq.push_back(tmp);
                tmp = "";
            }
        }
        for(char e : cmd){
            if (e == 'R') r = !r;
            else if(!D()){
                cout << "error\n";
                is_error = true;
                break;
            }
        }
        if(!is_error){
            cout << '[';
            while(!dq.empty()){
                if(!r){ 
                    cout << dq.front();
                    dq.pop_front();
                }
                else{
                    cout << dq.back();
                    dq.pop_back();
                }
                if(dq.empty()) break;
                cout << ',';
            }
            cout << "]\n";
        }
    }
    return 0;
}

int D(){
    if(dq.empty()) return 0;
    else if (r) dq.pop_back();
    else dq.pop_front();
    return 1;
}