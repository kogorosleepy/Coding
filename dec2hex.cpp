#include<bits/stdc++.h>
using namespace std;

string dec2hex(int d){
    string ans = "";
    char a;
    if(d == 0){
        return "";
    }
    int rem = d%16;
    char ch;

    if(rem < 10){
        ch = rem + '0';
    }
    else{
        ch = rem - 10 + 'A';
    }

    return dec2hex(d / 16) + ch;

}

int main(){
    int d;
    while(cin >> d){
        if(d == 0){
            cout << d << " -> 0" << endl;
            continue;
        }
        cout << d << " -> " << dec2hex(d) << endl;
    }

    return 0;
}