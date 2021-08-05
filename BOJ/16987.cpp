#include <bits/stdc++.h>
using namespace std;
void func(int);

int n;
int cnt;
int endu[10], weight[10];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> endu[i] >> weight[i];
    
    func(0);

    cout << cnt;

    return 0;
}

void func(int cur){
    if(cur == n) {
        int tmp = 0;
        for(int i = 0; i < n; i++){
            if(endu[i] <= 0) tmp++;
        }
        cnt = max(cnt, tmp);
        return;
    }

    if(endu[cur] <= 0) {
        func(cur + 1);
        return;
    }

    bool broken = false;
    for(int i = 0; i < n; i++){
        if(cur == i || endu[i] <= 0) continue;

        endu[cur] -= weight[i];
        endu[i] -= weight[cur];

        int tmp = 0;
        if(endu[cur] <= 0) tmp++;
        if(endu[i] <= 0) tmp++;
        broken = true;
        func(cur + 1);
            
        endu[cur] += weight[i];
        endu[i] += weight[cur];
    }
    if(!broken) func(cur + 1);
}