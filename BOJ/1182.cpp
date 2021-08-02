#include <bits/stdc++.h>
using namespace std;
void func(int, int);

int n, s;
int arr[21];
int cnt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    func(0, 0);

    if(s == 0) cnt--;

    cout << cnt;

    return 0;
}

void func(int cur, int sum) {
    if (cur == n){ 
        if(sum == s) cnt++;
        return;
    }

    func(cur + 1, sum);
    func(cur + 1, sum + arr[cur]);
}