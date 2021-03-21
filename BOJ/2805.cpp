#include <bits/stdc++.h>
using namespace std;
const int MX = 1000000 + 5;
long long woods_length[MX];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, m;
    long long min = 0;
    long long max = 0;
    long long height = 0;
    
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> woods_length[i];
        max = woods_length[i] > max ? woods_length[i] : max;
    }
    while(min <= max){
        long long wood = 0;
        long long mid = (min + max) / 2;
        for(int i = 0; i < n; i++){
            if(mid < woods_length[i])
                wood += (woods_length[i] - mid);
        }
        if(wood >= m){
            if(height < mid) height = mid;
            min = mid + 1;
        }
        else max = mid - 1;
    }
    cout << height;
    return 0;
}