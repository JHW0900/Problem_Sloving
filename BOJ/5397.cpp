#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;

    while(tc--){
        list<char> L;
        list<char>::iterator t = L.begin();
        string l;
        cin >> l;
        for(char e : l){
            if(e == '<'){
                if(t != L.begin()) t--;
                else continue;
            } 
            else if(e == '>'){
                if(t != L.end()) t++;
                else continue;
            }
            else if(e == '-'){
                if(t != L.begin()){
                    t--;
                    t = L.erase(t);
                }
                else continue; 
            }
            else if(L.size() == 0){
                L.push_back(e);
                t = L.begin();
                t++;
            }
            else L.insert(t, e);
        }
        for(auto it : L) cout << it;
        cout << '\n';
    }

    return 0;
}