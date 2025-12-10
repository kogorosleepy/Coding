#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    map<string,set<int>> data;
    cin >> n >> k;
    while(n--){
        string id;
        int t;
        cin >> id >> t;
        data[id].insert(t);
    }

    int cnt = 0;
    for(auto &i : data){
        if(i.second.size() == k) cnt++;
    }

    cout << cnt;

}