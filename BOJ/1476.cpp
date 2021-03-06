#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int e, s, m;
    int year = 1;
    cin >> e >> s >> m;

    while(true){
        if((year - e) % 15 == 0 && (year - s) % 28 == 0 && (year - m) % 19 == 0){
            cout << year;
            break;
        }
        year++;
    }
    return 0;
}