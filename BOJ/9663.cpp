#include <bits/stdc++.h>
using namespace std;
void func(int);

int n;
int cnt;

bool is_used1[50];   // 세로
bool is_used2[50];   // 우상향
bool is_used3[50];   // 우하향

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    func(0);

    cout << cnt;

    return 0;
}

void func(int cur){
    if(cur == n){
        cnt++;
        return;
    }

    for(int i = 0; i < n; i++){
        if(!is_used1[i] && !is_used2[cur + i] && !is_used3[cur - i + n - 1]){
            is_used1[i] = true;
            is_used2[cur + i] = true;
            is_used3[cur - i + n - 1] = true;
            func(cur + 1);
            is_used1[i] = false;
            is_used2[cur + i] = false;
            is_used3[cur - i + n - 1] = false;
        }
    }
}