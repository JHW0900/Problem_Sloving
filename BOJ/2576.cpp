#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int sum = 0, min = 100;

    for(int i = 0; i < 7; i++){
        cin >> n;
        if (n % 2 != 0){
            sum += n;
            if (n < min) min = n;
        }
    }

    if (sum == 0) cout << -1;
    else cout << sum << '\n' << min;

    return 0;
}