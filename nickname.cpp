#include<bits/stdc++.h>
using namespace std;

int main(){
    string sur[10] = {"Robert","William","James","John","Margaret","Edward","Sarah","Andrew","Anthony","Deborah"};
    string nick[10] = {"Dick","Bill","Jim","Jack","Peggy","Ed","Sally","Andy","Tony","Debbie"};

    int n;
    string s;
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> s;
        int chk=0;
        for(int j=0;j<10;j++){
            if(s == sur[j]){
                cout << nick[j];
                chk=1;
            }
            else if(s == nick[j]){
                cout << sur[j];
                chk=1;
            } 
        }
        if(chk==0) cout << "Not found";
        cout << "\n";
    }
}