#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    long long num = 665;
    cin >> n;
    while(n){
        int cnt = 0;
        num++;
        long long tmp = num;
        while(tmp){
            if(tmp % 10 == 6){
                cnt++;
                if(cnt == 3) break;
            }
            else cnt = 0;
            tmp /= 10;
        }
        if(cnt == 3) n--;
    }

    cout << num;
    return 0;
}