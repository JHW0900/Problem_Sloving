#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int l, p;
    int person[5];
    cin >> l >> p;

    for(int i = 0; i < 5; i++) 
        cin >> person[i];

    for(int i = 0; i < 5; i++) 
        cout << person[i] - (l * p) << ' ';

    return 0;
}