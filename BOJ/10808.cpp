#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int alpha[26] = { 0 };
    string word;
    cin >> word;

    for(char e : word){
        int idx = e - 'a';
        alpha[idx]++;
    }

    for(int e : alpha)
        cout << e << ' ';

    return 0;
}