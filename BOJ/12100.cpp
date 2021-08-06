#include <bits/stdc++.h>
using namespace std;
void mov_left();
void mov_right();
void mov_up();
void mov_down();

void func(int);

queue<int> q;
int n;
int result;
int arr[50][50];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) cin >> arr[i][j];

    func(0);
    cout << result;

    return 0;
}

void func(int cur){
    int board[50][50];

    if (cur == 5){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++)
                result = max(result, arr[i][j]);
        }
        return;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            board[i][j] = arr[i][j];
    }

    mov_left();
    func(cur + 1);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            arr[i][j] = board[i][j];
    }

    mov_right();
    func(cur + 1);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            arr[i][j] = board[i][j];
    }

    mov_up();
    func(cur + 1);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            arr[i][j] = board[i][j];
    }

    mov_down();
    func(cur + 1);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            arr[i][j] = board[i][j];
    }
}

void mov_left() {
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(arr[i][j]) q.push(arr[i][j]);
            arr[i][j] = 0;
        }

        int idx = 1;

        while(!q.empty()){
            int num = q.front();
            q.pop();

            if(arr[i][idx] == 0) arr[i][idx] = num;
            else if(arr[i][idx] == num) arr[i][idx++] *= 2; 
            else arr[i][++idx] = num;
        }
    }
}

void mov_right() {
    for(int i = 1; i <= n; i++){
        for(int j = n; j > 0; j--){
            if(arr[i][j]) q.push(arr[i][j]);
            arr[i][j] = 0;
        }

        int idx = n;

        while(!q.empty()){
            int num = q.front();
            q.pop();

            if(arr[i][idx] == 0) arr[i][idx] = num;
            else if(arr[i][idx] == num) arr[i][idx--] *= 2; 
            else arr[i][--idx] = num;
        }
    }
}

void mov_up() {
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(arr[j][i]) q.push(arr[j][i]);
            arr[j][i] = 0;
        }

        int idx = 1;

        while(!q.empty()){
            int num = q.front();
            q.pop();

            if(arr[idx][i] == 0) arr[idx][i] = num;
            else if(arr[idx][i] == num) arr[idx++][i] *= 2; 
            else arr[++idx][i] = num;
        }
    }
}

void mov_down() {
    for(int i = 1; i <= n; i++){
        for(int j = n; j > 0; j--){
            if(arr[j][i]) q.push(arr[j][i]);
            arr[j][i] = 0;
        }

        int idx = n;

        while(!q.empty()){
            int num = q.front();
            q.pop();

            if(arr[idx][i] == 0) arr[idx][i] = num;
            else if(arr[idx][i] == num) arr[idx--][i] *= 2; 
            else arr[--idx][i] = num;
        }
    }
}