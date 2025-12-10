#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    int cnt=0;
    getline(cin>>ws,a);
    getline(cin>>ws,b);

    if(a.size() > b.size()) cout << "Incomplete answer";
    else{
        for(int i=0;i<b.size();i++){
            if(b[i]== a[i%a.size()]) cnt++;
        }
        cout << cnt;
    }

}