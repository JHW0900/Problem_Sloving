#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int down = n / 2;
    int up = n - down;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < up; j++)
            cout << '*' << ' ';
        cout << '\n';
        for(int j = 0; j < down; j++)
            cout << ' ' << '*';
        cout << '\n';
    }
    return 0;
}