#include <bits/stdc++.h>
using namespace std;
const int MX = 1e7 + 1;
bool prime[MX];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    int index = 1;
    prime[index] = true;
    cin >> k;

    while(k > 0){
        index++;
        if(!prime[index]){
            int i = 2;
            k--;
            while(i * index < MX){
                prime[i * index] = true;
                i++;
            }
        }
    }
    cout << index;
    return 0;
}