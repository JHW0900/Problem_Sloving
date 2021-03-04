#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, n, tmp;
    int cnt = 0;
    vector<int> v;

    cin >> n >> k;
    while(n--){
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    tmp = 100;
    for(int i = (v.size() - 1); i >= 0; i--){
        if (v[i] == 0) break;
        else if (cnt < k && tmp > v[i]) cnt++;
        else if(tmp == v[i]) cnt++;
        else break;
        tmp = v[i];
    }
    cout << cnt;
    return 0;
}