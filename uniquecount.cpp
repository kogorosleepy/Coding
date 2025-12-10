#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> n, r;
    string k, m = "";
    getline(cin, k);

    for (int i = 0; i < k.size(); i++)
    {
        if (k[i] != ' ')
        {
            m += k[i];
            
        }
        else
        {
            n.push_back(stoi(m));
            m = "";
        }
    }
    n.push_back(stoi(m));

    sort(n.begin(), n.end());

    for (int i = 0; i < n.size() - 1; i++)
    {
        if (n[i] != n[i + 1])
        {
            r.push_back(n[i]);
        }
    }

    r.push_back(n[n.size() - 1]);

    cout << r.size() << endl;
    if (r.size() <= 10)
    {
        for (int i = 0; i < r.size(); i++)
        {
            cout << r[i] << " ";
        }
    }
    else{
        for(int i=0;i<10;i++){
            cout << r[i] << " ";
        }
    }
}