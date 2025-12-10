#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int> maj;
    while(n--){
        string ma;
        int k;
        cin >> ma >> k;
        maj[ma] = k;
    }

    int m;
    cin >> m;
    map<string,string> res;
    vector<tuple<double,string,vector<string>>> data;
    while(m--){
        string id;
        double point;
        string major;
        cin >> id >> point;
        vector<string> mm;
        for(int i=0;i<4;i++){
            cin >> major;
            mm.push_back(major);
        }
        data.push_back(make_tuple(point,id,mm));
    }
    sort(data.begin(),data.end(),greater<tuple<double,string,vector<string>>>());
    
    for(auto &i : data){
        for(auto &j : get<2>(i)){
            if(maj[j] != 0){
                maj[j] -= 1;
                res[get<1>(i)] = j;
                break;
            }
            else{
                continue;
            }
        }
    }

    for(auto &i : res){
        cout << i.first << " " << i.second << "\n";
    }

    return 0;

}