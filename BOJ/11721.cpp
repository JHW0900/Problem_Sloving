#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    int i = 1;
    cin >> str;
    for(char e : str){
        if(i == 11){
            i = 1;
            cout << '\n';
        }
        cout << e;
        i++;
    }
    return 0;
}