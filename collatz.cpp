#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> n;
    int k;
    cin >> k;
    n.push_back(k);
    while (k != 1)
    {
        if (k % 2 == 0)
        {
            k = k / 2;
            n.push_back(k);
        }
        else
        {
            k = 3 * k + 1;
            n.push_back(k);
        }
        if (k == 1)
            break;
    }

    if (n.size() <= 15)
    {
        for (int i = 0; i < n.size(); i++)
        {
            cout << n[i];
            if (i != n.size() - 1)
                cout << "->";
        }
    }
    else{
        for(int i=n.size()-15;i<n.size();i++){
            cout << n[i];
            if (i != n.size() - 1)
                cout << "->";
        }
    }
}