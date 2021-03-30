#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    string clothes, type;
    cin >> t;
    while(t--){
        int result = 1;
        vector<string> clothes_type;
        map<string, int> m;
        cin >> n;
        for(int i = 0; i < n; i ++){
            cin >> clothes >> type;
            m[type]++;
            if(m[type] == 1) clothes_type.push_back(type);
        }
        for(auto e : clothes_type) result *= (m[e] + 1);
        cout << result - 1 << '\n';
    }
    return 0;
}