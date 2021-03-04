#include <bits/stdc++.h>
using namespace std;
const int MX = 1000000 + 5;

queue<int> Q;
int board[MX];
int ds[2];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    /* **************************
        F : 전체 높이
        G : 목적 높이
        S : 현재 위치
        D : 아래로 향하는 칸
        U : 위로 향하는 칸
    ************************** */
    int F, S, G, U, D;
    cin >> F >> S >> G >> U >> D;
    
    fill(board, board + MX, -1);
    ds[0] = U;
    ds[1] = (-1 * D);
    Q.push(S);
    board[S] = 0;

    while(!Q.empty()){
        int cur = Q.front(); Q.pop();

        for(int i = 0; i < 2; i++){
            int ns = cur + ds[i];

            if(ns < 1 || ns > F) continue;
            else if (board[ns] >= 0) continue;
            else {
                board[ns] = board[cur] + 1;
                Q.push(ns);
            }
        }
    }
    if (board[G] == -1) cout << "use the stairs";
    else cout << board[G];
    return 0;
}