#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    int sum = 0;
    cin >> m >> n;

    int tmp = (int)sqrt(m);
    if (tmp*tmp < m) m = tmp + 1;
    else m = tmp;
    n = (int)sqrt(n);
    
    if (m >= n){
        cout << -1;
        return 0;
    }

    for(int i = m; i <= n; i++)
        sum += (i*i);
    cout << sum << '\n' << m*m;

    return 0;
}