#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(true){
        string n;
        bool is_palindrome = true;
        cin >> n;

        if (n == "0") break;
        for(int i = 0; i < n.size(); i++){
            if(n[i] != n[n.size() - i - 1]){
                cout << "no" << '\n';
                is_palindrome = false;
                break;
            }
        }
        if(is_palindrome) cout << "yes" << '\n';
    }

    return 0;
}