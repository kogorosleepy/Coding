#include<bits/stdc++.h>
using namespace std;

int main(){
    double xe,ye,re,rp,xm,ym,xp,yp;
    cin >> xe >> ye >> re >> rp >> xm >> ym;

    double A,B,C,a,b,c;
    A = xm-xe;
    B = ym-ye;
    C = sqrt((A*A) + (B*B));
    c = re-rp;

    xp = xe + c*A/C;
    yp = ye + c*B/C;
    
    yp = round(yp);
    xp = round(xp);
    cout << xp << " " << yp;
}