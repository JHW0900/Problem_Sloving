#include <bits/stdc++.h>
using namespace std;

int alpha[26];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int index = -1;
    string str;
    cin >> str;
    for(char e : str) alpha[e - 'A']++;
    for(int i = 0; i < 26; i++){
        if(alpha[i] % 2 == 1){
            if (index != -1) {
                cout << "I'm Sorry Hansoo";
                return 0;
            }
            index = i;
        }
    }

    for(int i = 0; i < 26; i++){
        for(int j = 0; j < alpha[i]/2; j++) 
            cout << (char)(i + 'A');
    }
    if(index >= 0) cout << (char)(index + 'A');
    for(int i = 25; i >= 0; i--){
        for(int j = 0; j < alpha[i]/2; j++) 
            cout << (char)(i + 'A');
    }
    return 0;
}