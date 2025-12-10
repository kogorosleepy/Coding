#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, vector<string>> sing;
    n += 1;

    for (int i = 0; i < n; i++)
    {
        string query;
        getline(cin, query);
        stringstream ss(query);
        string song, n1, n2;
        int j = 0;
        while (getline(ss, song, ','))
        {
            if (j == 0)
                n1 = song;
            else if (j == 1)
                n2 = song;
            j++;
        }
        sing[n1].push_back(n2);
    }

    string qr;
    getline(cin, qr);
    stringstream ss(qr);
    string fin;
    int k = 0;
    while (getline(ss, fin, ','))
    {
        if (k != 0)
        {
            fin.erase(0, 1);
        }
        cout << fin << " ->";
        if (sing.find(fin) != sing.end())
        {
            auto it = sing.find(fin);
            string a = "";
            for (auto i : it->second)
            {
                cout << a << i;
                a = ",";
            }
        }
        else
        {
            cout << " Not found";
        }
        cout << "\n";
        k++;
    }

    return 0;
}