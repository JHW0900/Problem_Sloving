#include <bits/stdc++.h>
using namespace std;
void dfs(int, int, int);

int n;
int result;
int board[20][20];
// int dp[20][20];
/* 
    0 : 가로
    1 : 대각선
    2 : 세로
*/
int direction[3] = {0, 1, 2};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // fill(&dp[0][0], &dp[19][20], -1);

    cin >> n;

    /*  
        0 : 길
        1 : 벽 (못 감)
    */
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> board[i][j];

    board[0][0] = 1;
    dfs(0, 1, direction[0]);

    cout << result;

    return 0;
}

void dfs(int r, int c, int prev){
    if (r == (n-1) && c == (n-1)){
        result++;
        return;
    }
    // else if (dp[r][c] != -1) {
    //     result += (dp[r][c] + 1);
    //     return dp[r][c];
    // }

    if (prev == direction[0]) {
        if ((c + 1) < n && board[r][c + 1] == 0)
            // dp[r][c] += 
            dfs(r, c + 1, direction[0]);

        if ((c + 1) < n && (r + 1) < n){
            if (board[r + 1][c + 1] == 0 && board[r][c + 1] == 0 && board[r + 1][c] == 0)
                // dp[r][c] += 
                dfs(r + 1, c + 1, direction[1]);
            else return;
        }
        else return;
    } 
    else if (prev == direction[1]) {
        if ((c + 1) < n && board[r][c + 1] == 0)
            // dp[r][c] += 
            dfs(r, c + 1, direction[0]);

        if ((r + 1) < n && board[r + 1][c] == 0)
            // dp[r][c] +=
            dfs(r + 1, c, direction[2]);

        if ((c + 1) < n && (r + 1) < n){
            if (board[r + 1][c + 1] == 0 && board[r][c + 1] == 0 && board[r + 1][c] == 0)
                // dp[r][c] += 
                dfs(r + 1, c + 1, direction[1]);
            else return;
        }
        else return;
    } 
    else if (prev == direction[2]) {
        if ((r + 1) < n && board[r + 1][c] == 0)
            // dp[r][c] += 
            dfs(r + 1, c, direction[2]);

        if ((c + 1) < n && (r + 1) < n){
            if (board[r + 1][c + 1] == 0 && board[r][c + 1] == 0 && board[r + 1][c] == 0)
                // dp[r][c] += 
                dfs(r + 1, c + 1, direction[1]);
            else return;
        }
        else return;
    }

    // if (dp[r][c] == -1) return 0;
    // else return dp[r][c];
}