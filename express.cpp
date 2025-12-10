#include<bits/stdc++.h>
using namespace std;

int main(){
    double x;
    cin >> x;

    double rex = x*M_PI/180.0;

    double r1,r2,r3,r4,result=0;

    r1 = (x*x) + pow(cos(rex),2);
    r2 = sin(rex);
    r3 = (pow(cos(rex),3)) / ((x*x)+1);
    result = (sqrt(r1)) / (r2+r3);
    cout << fixed << setprecision(1) << result;

}