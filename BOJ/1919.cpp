#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt = 0;
    string a, b;
    int a_alpha[26] = {};
    int b_alpha[26] = {};
    cin >> a >> b;

    for(char e : a)
        a_alpha[e - 'a']++;

    for(char e : b)
        b_alpha[e - 'a']++;

    for(int i = 0; i < 26; i++){
        if(a_alpha[i] != b_alpha[i])
            cnt += abs(a_alpha[i] - b_alpha[i]);
    }

    cout << cnt;

    return 0;
}