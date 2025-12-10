#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<string, string>> stu;
    vector<string> up = {"A", "B+", "B", "C+", "C", "D+", "D", "F"};
    string id, g;
    while (id != "q")
    {
        cin >> id;
        if (id == "q")
            break;
        cin >> g;
        stu.push_back(make_pair(id, g));
    }

    string k;
    getline(cin >> ws, k);
    string ch = "";
    for (int i = 0; i < k.size(); i++)
    {
        if (k[i] != ' ')
        {
            ch += k[i];
        }
        else
        {
            for (int j = 0; j < stu.size(); j++)
            {
                if (ch == stu[j].first)
                {
                    if (stu[j].second != "A")
                    {
                        auto it = find(up.begin(), up.end(), stu[j].second);
                        int dis = distance(up.begin(), it);
                        stu[j].second = up[dis - 1];
                    }
                }
            }

            ch = "";
        }
    }

    for (int j = 0; j < stu.size(); j++)
    {
        if (ch == stu[j].first)
        {
            if (stu[j].second != "A")
            {
                auto it = find(up.begin(), up.end(), stu[j].second);
                int dis = distance(up.begin(), it);
                stu[j].second = up[dis - 1];
            }
        }
    }

    for(int i=0;i<stu.size();i++){
        cout << stu[i].first << " " << stu[i].second << "\n";
    }
}