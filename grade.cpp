#include<bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin >> n;
    
    if(n>=80) cout << "A";
    else if(n>=70 && n<80) cout << "B";
    else if(n>=60 && n<70) cout << "C";
    else if(n>=50 && n<60) cout << "D";
    else cout << "F";
}