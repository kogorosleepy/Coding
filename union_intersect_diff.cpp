#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> uni;
    set<int> inters1;
    set<int> diff;
    string line, line1;

    getline(cin, line);
    stringstream ss(line);
    int x;
    while (ss >> x)
    {
        uni.insert(x);
        inters1.insert(x);
        diff.insert(x);
    }

    while (getline(cin, line1))
    {
        set<int> inters2;
        stringstream ss1(line1);
        int y;
        while (ss1 >> y)
        {
            uni.insert(y);

            if(inters1.find(y) != inters1.end()){
                inters2.insert(y);
            }

            if (diff.find(y) != diff.end())
            {
                diff.erase(y);
            }
        }

        inters1 = inters2;
    }

    cout << "U: ";
    if (uni.size() != 0)
    {
        for (auto &i : uni)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "empty set";
    }
    cout << "\n";

    cout << "I: ";
    if (inters1.size() != 0)
    {
        for (auto &i : inters1)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "empty set";
    }
    cout << "\n";

    cout << "D: ";
    if (diff.size() != 0)
    {
        for (auto &i : diff)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "empty set";
    }
    cout << "\n";
}