#include <bits/stdc++.h>
using namespace std;

<<<<<<< Updated upstream
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int amt = 0;
    int num[10] = { 0 };
    cin >> n;

    do {
        num[n % 10]++;
        n /= 10;
    } while(n);

    for (int i = 0; i < 10; i++) {
        if (i == 6 || i == 9) continue;
        else if (num[i] > amt) amt = num[i];
    }

    int tmp = (num[6] + num[9]) / 2;
    if ((num[6] + num[9]) % 2 == 0) {
        if (tmp > amt)
            amt = tmp;
    }
    else {
        tmp += 1;
        if (tmp > amt)
            amt = tmp;
    }

    cout << amt;
=======
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    
>>>>>>> Stashed changes

    return 0;
}