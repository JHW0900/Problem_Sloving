#include <bits/stdc++.h>
using namespace std;
int occur[1000001] = { 0 };

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    int cnt = 0;

    cin >> n;
    int *arr = new int[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        occur[arr[i]] = 1;
    }

    cin >> x;

    for(int i = 0; i < n; i++){
        int idx = x - arr[i];
        if (idx > 0 && occur[idx])
            cnt++;
    }

    cout << cnt / 2;

    return 0;
}