#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int num[10]={},chk=0;

    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            num[s[i]-'0']=1;
        }
    }
    for(int i=0;i<10;i++){
        if(num[i]!=0) chk++;

    }
    int mis = 10-chk;
    if(chk<10){
        for(int i=0;i<10;i++){
            if(num[i]==0 && mis!=1){
                cout << i << ",";
                mis--;
            }
            else if(num[i]==0 && mis==1){
                cout << i;
            }

        }
    }
    else cout << "None";
}