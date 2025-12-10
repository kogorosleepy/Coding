#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,double> exc;
    for(int i=0;i<n;i++){
        string s;
        double d;
        cin >> s >> d;
        exc[s] = d;
    }

    int money;
    cin >> money;

    string ord,prev;
    cin >> prev;
    cout << money << " " << prev;
    while(cin >> ord){
        if(ord == prev){
            money = money;
        }
        else if(ord == "THB"){
            money = money*exc[prev];
        }
        else if(prev == "THB"){
            money = money/exc[ord];
        }
        else{
            money = money*exc[prev] / exc[ord];
        }
        cout << " -> " << money << " " << ord;
        prev = ord;
    }
}