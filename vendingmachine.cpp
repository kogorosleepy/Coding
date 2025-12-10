#include<bits/stdc++.h>
using namespace std;

int main(){
    int pr;
    cin >> pr;

    string s,ord;
    getline(cin >> ws,s);
    long long cup=0;
    for(int i=0;i<s.size();i++){
        if(s[i] != ' '){
            ord += s[i];
        }
    }
    for(int i=1;i<ord.size();i++){
        if((!isupper(ord[i])) && (isupper(ord[i-1])) ){
            for(int j=i;j<ord.size();j++){
                if(isupper(ord[j])){
                    string k = ord.substr(i,j-i);
                    cup += stoll(k);
                    break;
                }
                else if(j == ord.size()-1){
                    string k = ord.substr(i);
                    cup += stoll(k);
                    break;
                }
            }
        }
    }
    cup *= pr;
    cout << cup;
}