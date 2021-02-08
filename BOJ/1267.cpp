#include <bits/stdc++.h>
using namespace std;
int young_sik(int);
int min_sik(int);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int y = 0, m = 0;
    /*
        영식 요금제 - 30초 10원 0 ~ 29 = 10원
        민식 요금제 - 60초 15원 0 ~ 59 = 15원
                                                */
    int n;
    int avg = 0;
    cin >> n;

    while(n--){
        int tmp;
        cin >> tmp;
        y += young_sik(tmp);
        m += min_sik(tmp);
    }

    if (y == m) cout << 'Y' << ' ' << 'M' << ' ' << y;
    else y < m ? cout << 'Y' << ' ' << y : cout << 'M' << ' ' << m;
    return 0;
}

int young_sik(int n){
    n += 1;
    int cnt = n / 30;
    if (n % 30 != 0) cnt += 1;
    return cnt * 10;
}

int min_sik(int n){
    n += 1;
    int cnt = n / 60;
    if (n % 60 != 0) cnt += 1;
    return cnt * 15;
}