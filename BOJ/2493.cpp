#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s;
    stack<int> index;
    int n, num;
    int cnt = 0;

    cin >> n;
    while (n--)
    {
        cin >> num;
        cnt++;
        while (true)
        {
            if (s.empty())
            {
                cout << 0 << ' ';
                s.push(num);
                index.push(cnt);
                break;
            }
            else
            {
                if (num > s.top())
                {
                    s.pop();
                    index.pop();
                }
                else
                {
                    cout << index.top() << ' ';
                    s.push(num);
                    index.push(cnt);
                    break;
                }
            }
        }
    }
    return 0;
}