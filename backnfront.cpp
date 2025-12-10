#include<bits/stdc++.h>
using namespace std;

vector<int> n;

int main(){

    int k;
    cin >> k;
    int cnt=1;
    while(k--){
        int t;
        cin >> t;
        if(cnt%2 == 1) n.push_back(t);
        else if(cnt%2 == 0) n.insert(n.begin(),t);

        cnt++;
    }

    while(true){
        int t;
        cin >> t;
        if(t == -1) break;
        if(cnt%2 == 1) n.push_back(t);
        else if(cnt%2 == 0) n.insert(n.begin(),t);

        cnt++;
    }

    cout << "[";
    for(int i=0;i<n.size();i++){
        cout << n[i];
        if(i != n.size()-1){
            cout << ", ";
        }
    }
    
    cout << "]";

}