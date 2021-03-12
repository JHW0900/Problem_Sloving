#include <bits/stdc++.h>
using namespace std;
int crew[105];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, num;
    int mx = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        if (num > 0)
            crew[num]++;
            mx = mx < crew[num] ? crew[num] : mx;
    }
    int index = -1;
    for(int i = 1; i < n + 1; i++){
        if (crew[i] == mx){
            if (index > 0){
            cout << "skipped";
            return 0;
            }
            index = i;
        }
    }
    cout << index;
    return 0;
}