#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int star = 1;
    cin >> n;

    while(n--){
        for(int i = 0; i < n; i++) cout << ' ';
        for(int i = 0; i < star; i++) cout << '*';
        cout << '\n';
        star += 2;
    }

    return 0;
}
