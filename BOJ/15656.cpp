#include <bits/stdc++.h>
using namespace std;
void func(int);

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

void func(int cur) {
    if(cur == m){
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for(int i = 0; i < n; i++) {
        arr[cur] = tmp[i];
        func(cur + 1);
    }
}