#include <bits/stdc++.h>
using namespace std;

int board[101][101];
int is_visited[101][101];

queue<pair<int, char> > Q;
deque<pair<int, int> > dq;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, K, L;
    cin >> N >> K;

    while (K--)
    {
        int row, rows;
        cin >> row >> rows;

        board[row][rows] = 1;
    }

    cin >> L;

    while (L--)
    {
        int X;
        char C;

        cin >> X >> C;
        Q.push(pair<int, char>(X, C));
    }

    int sec = 0;
    int di = 0;

    dq.push_back(pair<int, int>(1, 1));
    is_visited[1][1] = 1;

    while (true)
    {
        int hx = dq.front().first;
        int hy = dq.front().second;

        if (Q.front().first == sec)
        {
            switch (Q.front().second)
            {
            case 'D':
                di++;
                if (di == 4)
                    di = 0;
                break;
            case 'L':
                di--;
                if (di == -1)
                    di = 3;
                break;
            }
            Q.pop();
        }

        int cx = hx + dx[di];
        int cy = hy + dy[di];

        if (is_visited[cx][cy] == 1 || cx > N || cy > N || cx == 0 || cy == 0)
        {
            sec++;
            break;
        }
        else {
            dq.push_front(pair<int, int>(cx, cy));
            is_visited[cx][cy] = 1;
        }

        if (board[cx][cy] == 1)
            board[cx][cy] = 0;
        else
        {
            int px = dq.back().first;
            int py = dq.back().second;

            dq.pop_back();

            is_visited[px][py] = 0;
        }

        sec++;
    }

    cout << sec << "\n";

    return 0;
}