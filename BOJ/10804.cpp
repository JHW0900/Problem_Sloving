#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int l, r;
    int deque[21];
    for(int i = 0; i <= 20; i++) deque[i] = i;

    for(int i = 0; i < 10; i++){
        cin >> l >> r;
        while(l < r) swap(deque[l++], deque[r--]);
    }

    for (int i = 1; i <= 20; i++) cout << deque[i] << ' ';
    return 0;
}