#include <bits/stdc++.h>
using namespace std;
vector<int> card_type;
int maximum(int, int);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    int result = 0;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        card_type.push_back(num);
    }
    sort(card_type.begin(), card_type.end());

    for(int i = 0; i < n; i++){
        
        result = max(result, maximum(i, m));
        if(result == m) break;
    }

    cout << result;

    return 0;
}

int maximum(int n, int limit){
    int m = 0;
    for(int i = (n + 1); i < card_type.size() - 1; i++){
        for(int j = (i + 1); j < card_type.size(); j++){
            int tmp = card_type[n] + card_type[i] + card_type[j];
            if(tmp <= limit) m = max(m, tmp);
            else if (tmp == limit) return limit;
        }
    }
    return m;
}