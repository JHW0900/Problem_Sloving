#include <bits/stdc++.h>
using namespace std;
void push_front(int);
void push_back(int);
int pop_front();
int pop_back();
int size();
int empty();
int front();
int back();

const int MX = 100005;
int dat[2*MX + 1];
int head = MX, tail = MX;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    string cmd;
    cin >> n;
    while(n--){
        cin >> cmd;
        if (cmd == "push_back"){
            cin >> x;
            push_back(x);
        }
        else if(cmd == "push_front"){
            cin >> x;
            push_front(x);
        }
        else if(cmd == "front"){
            cout << front() << '\n';
        }
        else if(cmd == "back"){
            cout << back() << '\n';
        }
        else if(cmd == "size"){
            cout << size() << '\n';
        }
        else if(cmd == "pop_front"){
            cout << pop_front() << '\n';
        }
        else if(cmd == "pop_back"){
            cout << pop_back() << '\n';
        }
        else if(cmd == "empty"){
            cout << empty() << '\n';
        }
    }
    return 0;
}

void push_front(int x){
    dat[--head] = x;
}
void push_back(int x){
    dat[tail++] = x;
}
int pop_front(){
    if (head == tail) return -1;
    return dat[head++];
}
int pop_back(){
    if (head == tail) return -1;
    return dat[--tail];
}
int size(){
    return tail - head;
}
int empty(){
    if (head == tail) return 1;
    return 0;
}
int front(){
    if (head == tail) return -1;
    return dat[head];
}
int back(){
    if (head == tail) return -1;
    return dat[tail - 1];
}