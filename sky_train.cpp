#include<bits/stdc++.h>
using namespace std;

int main(){
   
    map<string,vector<string>> train;
    set<string> res;
    
    string s,t,start;
    while(cin >> s){
        if(!(cin >> t)){
            start = s;
            break;
        }
        train[s].push_back(t);
        train[t].push_back(s);
    }

    res.insert(start);

    for(auto &i : train[start]){
        res.insert(i);
        for(auto &j : train[i]){
            res.insert(j);
        }
    }

    for(auto i : res){
        cout << i << "\n";
    }
}