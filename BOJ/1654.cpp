#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, n;
    long long wire[10005];
    long long max = 0, min = 1;
    long long height = 0;
    cin >> k >> n;
    
    for(int i = 0; i < k; i++) {
        cin >> wire[i];
        max = wire[i] > max ? wire[i] : max;
    }

    while(min <= max) {
        long long mid = (min + max) / 2;
        long long cnt = 0;
        for(int i = 0; i < k; i++){
            if(mid <= wire[i]) cnt += (wire[i] / mid);
        }
        if(cnt >= n) {
            if(height < mid) height = mid;
            min = mid + 1;
        } else {
            max = mid - 1;
        }
    }
    cout << height;
    return 0;
}