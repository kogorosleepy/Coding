#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    vector<pair<string, vector<int>>> novel;
    cin >> x >> n;

    for (int i = 0; i < n; i++)
    {
        string f;
        int m, a;
        cin >> f >> m;
        vector<int> pr;
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            pr.push_back(a);
        }

        novel.push_back({f, pr});
    }

    vector<pair<string,int>> buy;
    int mn = INT_MAX;
    int chk = 0;
    for (auto &book : novel)
    {
        int sum = 0;
        int num = 0;
        int s;
        for (auto j : book.second)
        {
            if (sum + j <= x)
            {
                sum += j;
                num++;
                chk = 1;
            }
            else break;
        }
        s = book.second.size() - num;
        //cout << book.second.size() << " " << num << " " << s << " ";
        buy.push_back(make_pair(book.first,s));
        if(num != 0 ) mn = min(mn, s);
    }

    //cout << mn << " ";
    if (mn >= 0 && chk == 1)
    {
        for (auto &sec : buy)
        {
            // cout << sec.second << " ";
            if (sec.second == mn)
            {
                cout << sec.first << "\n";
            }
        }
    }
    else cout << "FIND SOMETHING FREE";
}