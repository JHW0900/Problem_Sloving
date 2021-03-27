#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
vector<int> result;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back({x, i});
        result.push_back(x);
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    result[v[0].second] = 0;

    for(int i = 1; i < n; i++){
        if(v[i-1].first == v[i].first) result[v[i].second] = cnt;
        else result[v[i].second] = ++cnt;
    }
    for(int e : result){
        cout << e << ' ';
    }
    return 0;
}