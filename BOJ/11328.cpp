#include <bits/stdc++.h>
using namespace std;
int is_strfry(string, string);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string a, b;

    cin >> n;
    while(n--){
        cin >> a >> b;
        if(is_strfry(a, b)) cout << "Possible";
        else cout << "Impossible";
        cout << '\n';
    }

    return 0;
}

int is_strfry(string a, string b){
    int a_alpha[26] = { 0 };
    int b_alpha[26] = { 0 };

    for(char e : a)
        a_alpha[e - 'a']++;
    for(char e : b)
        b_alpha[e - 'a']++;
    
    for(int i = 0; i < 26; i++)
        if (a_alpha[i] != b_alpha[i])
            return 0;
    return 1;
}