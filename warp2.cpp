#include <bits/stdc++.h>
using namespace std;

bool chk = false;

void warp(int a, int b, map<int, set<int>> &data, string path)
{

    path += to_string(a);
    if (a == b)
    {
        cout << path << "\n";
        chk = true;
        return;
    }
    if (data.find(a) == data.end())
    {
        return;
    }
    else
    {
        for (auto &j : data[a])
        {
            warp(j, b, data, path + " -> ");
        }
    }
}

int main()
{
    int n, st, en;
    map<int, set<int>> data;
    cin >> n >> st >> en;
    while (n--)
    {
        int s, e;
        cin >> s >> e;
        data[s].insert(e);
    }

    warp(st, en, data, "");

    if(!chk) cout << "no";
}
