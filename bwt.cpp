#include<bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin >> x;

    x += '$';

    vector<string> y;

    y.push_back(x);

    for(int i=0;i<x.size()-1;i++){
        char k = x[0];
        x.erase(0,1);
        x += k;
        y.push_back(x);
    }

    sort(y.begin(),y.end());

    for(int i=0;i<y.size();i++){
        cout << y[i][x.size()-1];
    }

}