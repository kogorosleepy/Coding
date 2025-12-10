#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    map<string,int> play;

    string song,name,type,tim;
    while(cin >> song >> name >> type >> tim){
        int ret;
        string h = "",m = "";
        for(int i=0;i<tim.size();i++){
            if(tim[i] != ':'){
                h += tim[i];
            }
            else if(tim[i] == ':'){
                m = tim.substr(i+1);
                break;
            }
        }
        ret = (stoi(h)*60) + stoi(m);
        play[type] += ret;
    }

    vector<pair<int,string>> res;
    for(auto &v : play){
        res.push_back(make_pair(v.second,v.first));
    }

    sort(res.begin(),res.end(),greater<pair<int,string>>());

    if(play.size() <=3){
        for(auto &it : res){
            cout << it.second << " --> " ;
            int hh = it.first/60;
            int mm = it.first - hh*60;
            cout << hh << ":" << mm << "\n";
        }
    }
    else{
        int i=0;
        for(auto &it : res){
            if(i == 3) break;
            cout << it.second << " --> " ;
            int hh = it.first/60;
            int mm = it.first - hh*60;
            cout << hh << ":" << mm << "\n";
            i++;
        }
    }
    return 0;
}