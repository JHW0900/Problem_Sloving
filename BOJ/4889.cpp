#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    int n = 1;
    while(true){
        int cnt = 0;
        stack<char> s;
        cin >> str;
        if(str[0] == '-') break;
        cout << n << ". ";
        for(char e : str){
            if(e == '{') s.push(e);
            else if (e == '}'){
                if(!s.empty() && s.top() == '{') s.pop();
                else {
                    s.push('{');
                    cnt++;
                }
            }
        }
        cnt = cnt + s.size() / 2;
        cout << cnt << '\n';
        n++;
    }
    return 0;
}