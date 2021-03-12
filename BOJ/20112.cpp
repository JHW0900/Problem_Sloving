#include <bits/stdc++.h>
using namespace std;

string board[105];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> board[i];

    for(int j = 0; j < n; j++){
        for(int i = 0; i < n; i++){
            if (board[i][j] != board[j][i]){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}