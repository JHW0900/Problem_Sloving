#include <bits/stdc++.h>
using namespace std;
void func(int);

int n, m;
int arr[10];
bool is_used[10];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    func(0);

    return 0;
}

void func(int cnt){
    if(cnt == m){
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for(int i = 1; i <= n; i++){
        if(!is_used[i]){
            arr[cnt] = i;
            is_used[i] = true;
            func(cnt + 1);
            is_used[i] = false;
        }
    }
}