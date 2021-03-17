#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
vector<int> ranking;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int num = 1;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    for(int i = 0; i < n; i++) {
        int r = 1;
        for(int j = 0; j < n; j++){
            if (i == j) continue;

            if (v[i].first < v[j].first && v[i].second < v[j].second)
                r++;
        }
        ranking.push_back(r);
    }

    for(int e : ranking) cout << e << ' ';
    return 0;
}