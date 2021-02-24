#include <bits/stdc++.h>
using namespace std;
vector<string> v;
vector<string> sol;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    string s;
    cin >> n >> m;
    while(n--){
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    while(m--){
        cin >> s;
        if(binary_search(v.begin(), v.end(), s))
            sol.push_back(s);
    }
    sort(sol.begin(), sol.end());
    cout << sol.size() << '\n';
    for(int i = 0; i < sol.size(); i++)
        cout << sol[i] << '\n';
    return 0;
}