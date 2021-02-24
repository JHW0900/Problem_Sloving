#include <bits/stdc++.h>
using namespace std;
int left_move(int);
int right_move(int);

deque<int> dq;
deque<int> dq2;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, num;
    int cnt = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) dq.push_back(i);
    dq2 = dq;
    
    for(int i = 0; i < m; i++){
        cin >> num;
        int l = left_move(num),
            r = right_move(num);
        if(l > r){
            cnt += r;
            dq2 = dq;
        } else {
            cnt += l;
            dq = dq2;
        }
    }

    cout << cnt;
    return 0;
}

int left_move(int x){
    int cnt = 0;

    while(1){
        if(dq2.front() == x) break;
        dq2.push_back(dq2.front());
        dq2.pop_front();
        cnt++;
    }
    dq2.pop_front();
    return cnt;
}

int right_move(int x){
    int cnt = 0;

    while(1){
        if(dq.front() == x) break;
        dq.push_front(dq.back());
        dq.pop_back();
        cnt++;
    }
    dq.pop_front();
    return cnt;
}