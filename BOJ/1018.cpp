#include <bits/stdc++.h>
using namespace std;
int WB_change(int x, int y);
int BW_change(int x, int y);
const string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};
const string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};
string board[100];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    int cnt = 8 * 8;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> board[i];
    for(int i = 0; i + 7 < n; i++){
        for(int j = 0; j + 7 < m; j++){
            cnt = min(cnt, min(WB_change(i, j), BW_change(i, j)));
        }
    }
    cout << cnt;
    return 0;
}

int WB_change(int x, int y){
    int cnt = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(board[x + i][y + j] != WB[i][j]) cnt++;
        }
    }
    return cnt;
}

int BW_change(int x, int y){
    int cnt = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(board[x + i][y + j] != BW[i][j]) cnt++;
        }
    }
    return cnt;
}