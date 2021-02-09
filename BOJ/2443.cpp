#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int blk = 0;

    cin >> n;
    while(n--){
        for(int i = 0; i < blk; i++) cout << ' ';
        for(int i = 0; i < (2*n + 1); i++) cout << '*';
        cout << '\n';
        blk++;
    }

    return 0;
}