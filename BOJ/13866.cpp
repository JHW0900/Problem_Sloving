#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int skill[4];
    for(int i = 0; i < 4; i++) cin >> skill[i];

    cout << abs((skill[3] + skill[0]) - (skill[1] + skill[2]));
    return 0;
}