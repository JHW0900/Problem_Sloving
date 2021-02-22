#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    list<int> L;
    list<int>::iterator t;
    for(int i = 1; i <= n; i++) L.push_back(i);
    t = L.begin();

    cout << '<';
    while(true){
        for(int i = 0; i < (k - 1); i++){
            t++;
            if(t == L.end()) t = L.begin();
        }
        cout << *t;
        
        t = L.erase(t);
        if(t == L.end()) t = L.begin();
        if(L.size() == 0){
            cout << '>';
            break;
        }
        else cout << ", ";
    }
    return 0;
}