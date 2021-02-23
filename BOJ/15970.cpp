#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    long result = 0;
    int point_amt = 0;
    vector<int> v1[5001];
    cin >> n;

    while(n--){
        int x, y;
        cin >> x >> y;
        if (point_amt < y) point_amt = y;
        v1[y].push_back(x);
    }

    for(int i = 1; i <= point_amt; i++) sort(v1[i].begin(), v1[i].end());

    for(int i = 1; i <= point_amt; i++){
        for(int j = 0; j < v1[i].size(); j++){
            if (j == 0) 
                result += (v1[i][j + 1] - v1[i][j]);
            else if (j == (v1[i].size() - 1)) 
                result += (v1[i][j] - v1[i][j - 1]);
            else
                result += min((v1[i][j + 1] - v1[i][j]), (v1[i][j] - v1[i][j - 1]));

        }
    }

    cout << result;
    return 0;
}