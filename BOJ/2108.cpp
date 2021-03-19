#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int frq[8000 + 5];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, num;
    int m = 0;
    int summary = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
        summary += num;
        frq[4000 + num]++;
        m = frq[4000 + num] > m ? frq[4000 + num] : m;
    }

    sort(v.begin(), v.end());
    cout << round(summary / (n*1.0)) << '\n';

    cout << v[v.size()/2] << '\n';

    num = -4001;
    for(int i = 0; i < 8000 + 5; i ++){
        if(frq[i] == m){
            if(num != -4001){
                num = i - 4000;
                break;
            }
            num = i - 4000;
        }
    }
    cout << num << '\n';

    cout << abs(v[v.size() - 1] - v[0]);
    return 0;
}