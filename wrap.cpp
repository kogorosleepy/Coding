#include <bits/stdc++.h>
using namespace std;

map<int,vector<int>> data;

string warp(int a,int b){
    if(a == b) return "yes";
    if(data.find(a) == data.end()) return "no";

    for(auto &j : data[a]){
        string res = warp(j,b);
        if(res == "yes") return "yes";
    }
    
    // bool chk = false;
    // for(auto &i : data){
    //     if(i.first == a){
    //         chk = true;
    //         for(auto &j : i.second){
    //             return warp(j,b);
    //         }
    //     }
    // }
    //if(!chk) return "no";

    return "no";
}

int main(){
    int n,st,en;
    cin >> n >> st >> en;
    while(n--){
        int s,e;
        cin >> s >> e;
        data[s].push_back(e);
    }
    
    cout << warp(st,en);
}
