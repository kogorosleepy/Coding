#include<bits/stdc++.h>
using namespace std;

int main(){
    string code;
    cin >> code;
    if(code == "01" || code == "02") cout << "OK";
    else if((code[0] == '2' || code[0] == '3') && (code[1] >= '0' && code[1] <= '9')) cout << "OK";
    else if(code == "40" || code == "51" || code == "53" || code == "55" || code == "58") cout << "OK";
    else cout << "Error";
}