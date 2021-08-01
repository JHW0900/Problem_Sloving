#include <bits/stdc++.h>
using namespace std;
void func(int cur);

int n, m;
int tmp[10];
int arr[10];

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

    int k = 0;
    for(int i = 0; i < n; i++){
        if(k != tmp[i]){
            arr[cur] = tmp[i];
            k = arr[cur];
            func(cur + 1);
        }
    }
}