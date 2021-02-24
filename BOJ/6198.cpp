#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<long long> s;
    long long n, num;
    long long cnt = 0;
    cin >> n;
    while(n--){
        cin >> num;
        if(s.empty()) s.push(num);
        else{
            while(s.top() <= num){
                s.pop();
                if(s.empty()) break;
            }
            cnt += s.size();
            s.push(num);
        }
    }
    cout << cnt;
    return 0;
}