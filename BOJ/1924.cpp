#include <bits/stdc++.h>
using namespace std;

int main(){
    const int month[13] = {0, 31, 28, 31, 30, 31, 
    30, 31, 31, 30, 31, 30, 31};
    const char *days[7] = {
        "SUN",
        "MON",
        "TUE",
        "WED",
        "THU",
        "FRI",
        "SAT"
    };

    int x, y;
    cin >> x >> y;
    for(int i = 0; i < x; i++)
        y += month[i];

    cout << days[y % 7];
    return 0;
}