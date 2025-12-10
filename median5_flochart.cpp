#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;

    if(a>b){
        int x=a;
        a = b;
        b = x;
    }

    if(c>d){
        int x=c;
        c = d;
        d = x;
    }

    if(a>c){
        int x = b;
        b = d;
        d = x;
        c = a;
    }

    a=e;

    if(a>b){
        int x=a;
        a = b;
        b = x;
    }

    if(c>a){
        int x = b;
        b = d;
        d = x;
        a = c;
    }

    if(a>d) cout << d;
    else cout << a;
}