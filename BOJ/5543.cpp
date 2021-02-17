#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int burger_types[3];
    int drink_types[2];
    int price = 0;
    int min = 5000;

    for(int i = 0; i < 3; i++){
        cin >> burger_types[i];
        if (min > burger_types[i]) min = burger_types[i];
    }
    price += min;
    min = 5000;
    for(int i = 0; i < 2; i++){
        cin >> drink_types[i];
        if (min > drink_types[i]) min = drink_types[i];
    }
    price += min;

    cout << price - 50;
    return 0;
}