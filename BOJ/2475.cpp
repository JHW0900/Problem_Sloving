#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int primary[5];
    int num = 0;
    for(int i = 0; i < 5; i++) { 
        cin >> primary[i];
        num += (primary[i] * primary[i]);
    }

    cout << num % 10;

    return 0;
}