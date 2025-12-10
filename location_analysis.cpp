#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,vector<string>> key;
    map<string,vector<string>> city;
    vector<pair<int,string>> sot;

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        sot.push_back(make_pair(0,s));
        string name;
        while(name != "*"){
            cin >> name;
            if(name != "*"){
                key[s].push_back(name);
                city[name].push_back(s);
            }
            else break;
            
        }
    }

    string target;
    cin >> target;

    set<string> seen;

    bool chk = false;
    for(auto &i : key[target]){
        for(auto &j : city[i]){
            if((j != target) && (seen.find(j) == seen.end())){
                for(auto &k : sot){
                    if(k.second == j){
                        k.first = 1;
                    }
                }
                seen.insert(j);
                chk = true;
            }
        }
    }

    if(chk){
        for(auto &i : sot){
            if(i.first == 1){
                cout << ">> " << i.second << "\n" ;
            }
        }
    }
    else{
        cout << ">> Not Found";
    }

    return 0;
}