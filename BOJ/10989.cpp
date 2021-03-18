#include <bits/stdc++.h>
using namespace std;
const int MX = 10000 + 5;
int arr[MX];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, num;
    cin >> n;
    while(n--){
        cin >> num;
        arr[num]++;
    }

    for(int i = 1; i <= 10000; i++){
        while(arr[i]--)
            cout << i << '\n';
    }
    return 0;
}