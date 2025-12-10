#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<double,string>> prod;

    string s;
    double d;
    while (s != "END")
    {
        cin >> s;
        if (s == "END")
            break;
        cin >> d;
        prod.push_back(make_pair(d,s));
    }

    string ord;
    getline(cin >> ws, ord);

    vector<pair<double,string>> res;

    for (int i = 0; i < prod.size(); i++)
    {
        res.push_back(make_pair( 0 ,prod[i].second));
    }

    string o = "";
    for (int i = 0; i < ord.size(); i++)
    {
        if (ord[i] != ' ')
        {
            o += ord[i];
        }
        else
        {
            for (int j = 0; j < prod.size(); j++)
            {
                if (o == prod[j].second)
                {
                    res[j].first += prod[j].first;
                }
                
            }
            o = "";
        }
    }

    for (int j = 0; j < prod.size(); j++)
    {
        if (o == prod[j].second)
        {
            res[j].first += prod[j].first;
        }
    }
    int cnt = 0;
    for (int i = 0; i < res.size(); i++)
    {
        if (res[i].first != 0)
        {
            cnt++;
        }
    }

    sort(res.begin(),res.end(),greater<pair<double,string>>());
    
    if(cnt == 0){
        cout << "No Sales";
    }
    else if (cnt <= 3)
    {
        for (int i = 0; i < res.size(); i++)
        {
            if (res[i].first != 0)
            {
                cout << res[i].second << " " << res[i].first << "\n";
            }
        }
    }
    else if(cnt>3)
    {
        for (int i = 0; i < 3; i++)
        {
            if (res[i].first != 0)
            {
                cout << res[i].second << " " << res[i].first << "\n";
            }
        }
    }

}