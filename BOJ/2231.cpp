#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, sum, min;
    cin >> n;

    for(int i = 1; i <= n; i++){
        sum = i;
        min = i;
        while(min > 0){
            sum += (min % 10);
            min /= 10;
        }
        if(sum == n){
            min = i;
            break;
        }
    }
    cout << min;

    return 0;
}