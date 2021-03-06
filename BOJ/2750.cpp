#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int);

int num[1005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> num[i];

    insertion_sort(n);
    for(int i = 0; i < n; i++)
        cout << num[i] << '\n';
    
    return 0;
}

void insertion_sort(int size){
    for(int i = 1; i < size; i++){
        int tmp = num[i];
        int index = i;

        for(int j = (i - 1); j >= 0; j--)
            if (tmp < num[j]) index = j;

        for(int j = (i - 1); j >= index; j--)
            num[j+1] = num[j];
        num[index] = tmp;
    }
}