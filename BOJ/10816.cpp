#include <bits/stdc++.h>
using namespace std;
vector<int> card;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, num;
    cin >> n;
    while(n--){
        cin >> num;
        card.push_back(num);
    }
    sort(card.begin(), card.end());

    cin >> m;
    while(m--){
        cin >> num;
        cout << upper_bound(card.begin(), card.end(), num) 
            - lower_bound(card.begin(), card.end(), num) << ' ';
    }
    return 0;
}