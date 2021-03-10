#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string lyrics[14] = {
        "baby", "sukhwan", "tururu", "turu",
        "very", "cute", "tururu", "turu",
        "in", "bed", "tururu", "turu",
        "baby", "sukhwan"
    };
    int pos;
    cin >> pos;
    pos -= 1;
    int index = pos % 14;
    
    if (lyrics[index] == "tururu"){
        for(int i = 0; i < pos / 14; i++){
            if((pos / 14) >= 3){
                lyrics[index] = "tu+ru*" + to_string(2 + pos/14);
                break;
            }
            lyrics[index] += "ru";
        }
    } else if (lyrics[index] == "turu") {
        for(int i = 0; i < pos / 14; i++){
            if((pos / 14) >= 4){
                lyrics[index] = "tu+ru*" + to_string(1 + pos/14);
                break;
            }
            lyrics[index] += "ru";
        }
    }
    cout << lyrics[index];
    return 0;
}