#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<tuple<double,int,int>,string>> data;

    string id;
    double gpa;
    int ic,h;
    while(cin >> id){
        if(id == "END") break;
        cin >> gpa >> h >> ic;
        h *= -1;
        gpa *= -1;
        data.push_back(make_pair(make_tuple(gpa,ic,h),id));
    }
    sort(data.begin(),data.end());
    vector<string> qua;
    vector<string> wait;
    set<string> unqua;
    set<string> seen;

    for(auto &i : data){
        get<0>(i.first) *= -1;
        get<2>(i.first) *= -1;
        if((get<0>(i.first) >= 3.75 ) && (get<1>(i.first) < 300000)){
            if(seen.find(i.second) == seen.end()){
                qua.push_back(i.second);
            }
        }
        else if((get<0>(i.first) >= 3.5) && (get<2>(i.first) >= 100) && (get<1>(i.first) >= 300000)){
            if(seen.find(i.second) == seen.end()){
                wait.push_back(i.second);
            }
        }
        else{
            if(seen.find(i.second) == seen.end()){
                unqua.insert(i.second);
            }
        }
    }

    if(!qua.empty()){
        cout << "Qualified\n";
        for(auto &i : qua){
            cout << i << "\n";
        }
    }
    if(!wait.empty()){
        cout << "Waiting List\n";
        for(auto &i : wait){
            cout << i << "\n";
        }
    }
    if(!unqua.empty()){
        cout << "Unqualified\n";
        for(auto &i : unqua){
            cout << i << "\n";
        }
    }

    return 0;
}