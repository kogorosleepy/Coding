#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string land[n];
    int fee[n];

    for(int i=0;i<n;i++){
        cin >> land[i] >> fee[i];
    }

    string st, nxt;
    int sum=0;
    string order;
    getline(cin >> ws,order);
    int i = 4;
    while(true){
        st = order.substr(i,2);
        i += 7;
        if(i>order.size()) break;
        nxt = order.substr(i,2);

        if(st != nxt){
            for(int j=0;j<n;j++){
                if(land[j]==nxt){
                    sum += fee[j];
                }
            }
        }

        
    }

    cout << sum;
}