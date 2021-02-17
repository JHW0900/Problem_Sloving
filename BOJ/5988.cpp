#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string num;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        if (!(int(num[num.size()-1]) % 2)) cout << "even";
        else cout << "odd";
        cout << '\n';
    }
}