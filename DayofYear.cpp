#include<bits/stdc++.h>
using namespace std;

int main(){
    int d,m,y;
    int mon[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; 
    cin >> d >> m >> y;
    y = y-543;
    int sum=0,chk=0;
    for(int i=0;i<m-1;i++){
        sum += mon[i];
    }
    sum += d;

    if(y%4==0){
        if(y%100==0){
            if(y%400==0) chk = 1;
        }
        else chk = 1;
    }

    if(chk==1) sum++;

    cout << sum;

}