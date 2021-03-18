#include<bits/stdc++.h>
using namespace std;
#define Y first
#define X second
vector<pair<int, int>> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int x, y;
    cin >> n;
    while(n--){
        cin >> x >> y;
        v.push_back({y, x});
    }

    sort(v.begin(), v.end());
    for(auto e : v){
        pair<int, int> cur = e;
        cout << cur.X << ' ' << cur.Y << '\n';
    }
    return 0;
}