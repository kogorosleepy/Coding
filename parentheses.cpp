#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    getline(cin>>ws, a);

    int chk=0;

    for(int i=0;i<a.size();i++){
        if(a[i] == '('){ 
            a[i] = '[';
            chk = 1;
        }
        else if(a[i] == ')'){
            a[i] = ']';
            chk = 1;
        } 
        else if(a[i] == '['){
            a[i] = '(';
            chk = 1;
        } 
        else if(a[i] == ']'){
            a[i] = ')';
            chk = 1;
        } 
    }

    if(chk = 1) cout << a;
    else cout << "no parentheses";
}