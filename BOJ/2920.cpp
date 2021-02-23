#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[8];
    bool is_ascending = true;

    for(int i = 0; i < 8; i++) cin >> arr[i];

    for(int i = 0; i < 8; i++){
        if(arr[i] != (i + 1)){
            is_ascending = false;
            break;
        }
    }

    if(is_ascending){
        cout << "ascending";
        return 0;
    }

    is_ascending = true;
    for(int i = 0; i < 8; i++){
        if(arr[i] != (8 - i)){
            is_ascending = false;
            break;
        }
    }

    if(is_ascending){
        cout << "descending";
        return 0;
    } else {
        cout << "mixed";
    }
    return 0;
}