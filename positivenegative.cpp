#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n<0) cout << "negative";
    else if(n>0) cout << "positive";
    else cout << "zero";
    
    cout << "\n";

    if(n%2==0) cout << "even";
    else cout << "odd";
}