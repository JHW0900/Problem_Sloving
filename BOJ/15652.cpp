#include <bits/stdc++.h>
using namespace std;
void func(int, int);

int n, m;
int arr[10];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    func(0, 0);

    return 0;
}

void func(int cur, int prev){
    if (cur == m) {
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for(int i = 1; i <= n; i++) {
        if (i >= prev){
            arr[cur] = i;
            func(cur + 1, i);
        }
    }
}