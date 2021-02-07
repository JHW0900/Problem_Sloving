#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v(4);
    int a, b;

    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 4; i++) cin >> v[i];

        a = count(v.begin(), v.end(), 0);
        b = count(v.begin(), v.end(), 1);

        if (a == 1 && b == 3) cout << 'A' << '\n';
        else if (a == 2 && b == 2) cout << 'B' << '\n';
        else if (a == 3 && b == 1) cout << 'C' << '\n';
        else if (a == 4 && b == 0) cout << 'D' << '\n';
        else cout << 'E' << '\n';
    }
    return 0;
}