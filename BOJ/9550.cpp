#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, k, num;

    cin >> t;
    while(t--){
        int result = 0;

        cin >> n >> k;
        while(n--) {
            cin >> num;
            result += (num / k);
        }
        cout << result << '\n';
    }
    return 0;
}