#include <bits/stdc++.h>
using namespace std;
void search(int);

int board[505][505];
int height[257];
int n, m, b;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> b;
    int min = 257, max = -1;
    int r;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
            min = min > board[i][j] ? board[i][j] : min;
            max = max < board[i][j] ? board[i][j] : max;
        }
    }

    for(int h = min; h <= max; h++){
        search(h);
        if(h == min) r = h;
        else if(height[r] >= height[h] && height[h] != -1)
            r = h;
    }
    cout << height[r] << ' ' << r;
    return 0;
}

void search(int h){
    int build = 0, remove = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(board[i][j] > h){
                height[h] += 2*(board[i][j] - h);
                remove += (board[i][j] - h);
            }
            else if (board[i][j] < h) {
                height[h] += (h - board[i][j]);
                build += h - board[i][j];
            }
        }
    }
    if((b + remove - build) < 0) height[h] = -1;
}