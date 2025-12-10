#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(getline(cin>>ws,s)){
        int chka=0,chkA=0,chk1=0,chks=0;
        for(auto i:s){
            if(i >= 'A' && i<='Z') chkA = 1;
            else if(i>='a' && i<= 'z') chka = 1;
            else if(i>= '0' && i<= '9') chk1 = 1;
            else chks = 1;
        }
        if(s.size()>=12 && chka ==1 && chkA == 1 && chk1 == 1 && chks == 1) cout << ">> strong\n";
        else if(s.size()>=8 && chka == 1 && chkA == 1 && chk1 == 1) cout << ">> weak\n";
        else cout << ">> invalid\n";
        

    }
}