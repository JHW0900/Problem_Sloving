#include <bits/stdc++.h>
using namespace std;
void func(int);

int n, m;
int tmp[10];
int arr[10];
bool is_used[10000 + 1];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> tmp[i];
    sort(tmp, tmp + n);

    func(0);

    return 0;
}

void func(int cur){
    if(cur == m){
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for(int i = 0; i < n; i++){
        int k = tmp[i];
        if(!is_used[k]){
            arr[cur] = k;
            is_used[k] = true;
            func(cur + 1);
            is_used[k] = false;
        }
    }
}