#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int R = 7, C = 7;
void floodfill(int x[][C], int r, int c, int e)
{
}
int main()
{
    int x[][C] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}};
    for (int r = 0; r < R; ++r)
        for (int c = 0; c < C; ++c)
            cin >> x[r][c];
    int row, col, e;
    cin >> row >> col >> e;
    floodfill(x, row, col, e);
    for (int r = 0; r < R; ++r)
    {
        for (int c = 0; c < C; ++c)
            cout << x[r][c] << ' ';
        cout << endl;
    }
}