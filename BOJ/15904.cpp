#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    char is_valid[4] = {'U', 'C', 'P', 'C'};
    string str;
    int i = 0;
    getline(cin, str);
    for(char e : str){
        if(is_valid[i] == e) i++;
    }
    if(i < 4) cout << "I hate UCPC";
    else cout << "I love UCPC";
    return 0;
}