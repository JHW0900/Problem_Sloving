#include <bits/stdc++.h>
using namespace std;

int main(){
    int male[6] = {0};
    int female[6] = {0};

    int n, k, s, y;
    int room = 0;
    cin >> n >> k;

    while(n--){
        cin >> s >> y;
        if(!s) female[y-1]++;
        else male[y-1]++;
    }

    for(int i=0; i<6; i++){
        room += male[i]/k;
        if (male[i] % k != 0) room++;

        room += female[i]/k;
        if (female[i] % k != 0) room++;
    }

    cout << room;

    return 0;
}