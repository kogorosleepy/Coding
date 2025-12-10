#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,string> nic;
    map<string,string> nam;
    long long n;

    cin >> n;
    for(long long i=0;i<n;i++){
        string s,l;
        cin >> s >> l;
        nic[s] = l;
        nam[l] = s;
    }
    long long m;
    cin >> m;
    for(long long i=0;i<m;i++){
        string k;
        cin >> k;

        auto it = nic.find(k) , it2 = nam.find(k);

        if((nic.find(k) == nic.end()) && (nam.find(k) == nam.end())){
            cout << "Not found" << "\n";
        }
        else if(it != nic.end()){
            cout << it->second << "\n";
        }
        else if(it2 != nam.end()){
            cout << it2->second << "\n";
        }
        // for(auto &g : nic){
        //     if(g.first == k){
        //         cout << g.second << "\n";
        //         chk = true;
        //         break;
        //     } 
        //     else if(g.second == k){
        //         cout << g.first << "\n";
        //         chk = true;
        //         break;
        //     } 
        // }

    }
}