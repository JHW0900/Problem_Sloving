#include <bits/stdc++.h>
using namespace std;
void func(int, int);

int n, m;
int tmp[10];
int arr[10];
bool is_used[10];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> tmp[i];
    sort(tmp, tmp + n);

    func(0, 0);

    return 0;
}

void func(int cur, int prev){
    if(cur == m){
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    int k = 0;
    for(int i = prev; i < n; i++){
        if(!is_used[i] && k != tmp[i]){
            arr[cur] = tmp[i];
            k = arr[cur];
            is_used[i] = true;
            func(cur + 1, i);
            is_used[i] = false;
        }
    }
}