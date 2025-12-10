#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> num;

    int t;
    int cnt = 0;
    while (cin >> t)
    {
        num.insert(t);
        if (num.find(n - t) != num.end())
        {
            if (t != n - t)
            {
                cnt++;
            }
        }
    }

    cout << cnt;
}