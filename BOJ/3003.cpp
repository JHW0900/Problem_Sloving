#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int chess_set[6] = {1, 1, 2, 2, 2, 8};
    int tmp;
    for(int i = 0; i < 6; i++){
        cin >> tmp;
        cout << chess_set[i] - tmp << ' ';
    }

    return 0;
}