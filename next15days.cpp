#include<bits/stdc++.h>
using namespace std;

int main(){
    int d,m,y,chk=0;
    cin >> d >> m >> y;
    y = y-543;
    int n = 31;
    if(m == 4 || m == 6 || m == 9 || m == 11) n=30;
    
    if(m==2){
        n = 28;
        if(y%4==0){
            if(y%100==0){
                if(y%400==0) n = 29;
            }
            else n = 29;
        }
    }

    d = d+15;
    if(d>n){
        d = d-n;
        m = m+1;
    }

    if(m>12){
        m = m - 12;
        y = y + 1;
    }

    y = y + 543;

    cout << d << "/" << m << "/" << y;
    


}