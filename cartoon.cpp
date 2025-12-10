#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<pair<string,string>> name;
    string a,b;
    while(cin >> a >> b){
        name.push_back(make_pair(a,b));
    }

    map<string,vector<string>> res;
    vector<string> ord;
    set<string> chk;

    for(auto &i : name){
        if(chk.find(i.second) == chk.end()){
            chk.insert(i.second);
            ord.push_back(i.second);
        }

        res[i.second].push_back(i.first);
    }

    for(auto &i : ord){
        cout << i << ": ";
        auto it = res.find(i);
        for(auto &t : it->second){
            cout << t << " ";
        }
        cout << "\n";
    }

    return 0;
}