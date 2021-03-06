#include <bits/stdc++.h>
using namespace std;
int frq[1005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int maxi = 0;
    int avg = 0;
    int index = -1;

    for(int i = 0; i < 10; i++){
        cin >> n;
        frq[n]++;
        avg += n;
        if (frq[n] > maxi){ 
            maxi = frq[n];
            index = n;
        }
    }
    avg /= 10;
    cout << avg << '\n' << index;
    return 0;
}