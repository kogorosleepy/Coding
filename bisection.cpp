#include<bits/stdc++.h>
using namespace std;

int main(){
    double a;
    cin >> a;
    double l=0, u=a;
    double x = (l+u)/2;
    while(abs(pow(10,x)-a) > 1e-10*a){
        if(pow(10,x)>a){
            u=x;
        }
        else if(pow(10,x)<a){
            l=x;
        }

        x = (l+u)/2;
    }

    cout << x;

}