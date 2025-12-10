#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> data;
    set<int> chk;
    while(n--){
        int num;
        cin >> num;
        data.push_back(num);
        chk.insert(num);
    }

    for(auto &i : data){
        if(chk.find(i*2) != chk.end()){
            cout << "1 ";
        }
        else{
            cout << "0 ";
        }
    }
}