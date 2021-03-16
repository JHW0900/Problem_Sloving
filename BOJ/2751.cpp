#include <bits/stdc++.h>
using namespace std;
const int MX = 1e6 + 5;
bool arr[2*MX];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, num;
    cin >> n;
    while(n--){
        cin >> num;
        arr[(int)1e6 + num] = true;
    }

    for(int i = 0; i < 2*MX; i++)
        if(arr[i]) cout << i - (int)1e6 << '\n';

    return 0;
}