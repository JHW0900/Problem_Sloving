#include <bits/stdc++.h>
using namespace std;
void func(int, int);

int k;
int S[20];
int arr[20];
bool is_used[20];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    while(true){
    cin >> k;

    if(k == 0) break;

    for(int i = 0; i < k; i++)
        cin >> S[i];

    func(0, 0);

    cout << '\n';
    }

    return 0;
}

void func(int cur, int prev){
    if(cur == 6){
        for(int i = 0; i < 6; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = prev; i < k; i++) {
        if(!is_used[i]){
            arr[cur] = S[i];
            is_used[i] = true;
            func(cur + 1, i);
            is_used[i] = false;
        }
    }
}