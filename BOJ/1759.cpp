#include <bits/stdc++.h>
using namespace std;
void func(int, int);
int check(char);

int l, c;

char S[20];
char arr[20];
char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
bool is_used[20];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> l >> c;

    for(int i = 0; i < c; i++)
        cin >> S[i];
    sort(S, S + c);

    func(0, 0);

    return 0;
}

void func(int cur, int prev){
    if(cur == l){
        int cnt = 0;

        for(int i = 0; i < l; i++)
            cnt += check(arr[i]);
        
        if(cnt < 1 || (l - cnt) < 2) return;

        for(int i = 0; i < l; i++)
            cout << arr[i];
        cout << '\n';
        return;
    }

    for(int i = prev; i < c; i++){
        if(!is_used[i]){
            arr[cur] = S[i];
            is_used[i] = true;
            func(cur + 1, i);
            is_used[i] = false;
        }
    }
}

int check(char c){
    for(int i = 0 ; i < 5; i++)
        if(vowel[i] == c) return 1;
    return 0;
}