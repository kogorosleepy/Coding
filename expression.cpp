#include<bits/stdc++.h>
using namespace std;

int main(){
    double s = 40.0 * M_PI / 180.0;
    double b = 7/sqrt(71) - sin(s);
    double a = pow(log(9.7),b);
    double ans = (M_PI - (3628800/pow(8,8)) + a) / (pow(1.2,cbrt(2.3)));
    cout << ans;
}