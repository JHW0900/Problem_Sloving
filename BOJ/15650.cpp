#include <bits/stdc++.h>
using namespace std;
void func(int);

int n, m;
int arr[10];
int is_used[10];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    func(0);

    return 0;
}

void func(int k) {
    if (k == m) {
        for(int i = 0; i < m; i++) 
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for(int i = 1; i <= n; i++){
        if(!is_used[i]) {
            if(k > 0) 
                if(arr[k - 1] > i) continue;
            arr[k] = i;
            is_used[i] = true;
            func(k + 1);
            is_used[i] = false;
        }
    }
}