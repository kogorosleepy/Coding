#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin >> ws,s);

    int chk[26]={0};

    for(int i=0;i<s.size();i++){
        if(s[i] < 97) s[i] += 32;
        
        chk[s[i]%97]++;
    }

    for(int i=0;i<26;i++){
        if(chk[i]>0){
            char k = i+'a';
            cout << k << " -> " << chk[i] << "\n";
        }
    }
}