#include<bits/stdc++.h>
using namespace std;

int main(){
    double w,h;
    cin >> w >> h;
    double mt,hc,bd;
    mt = sqrt(w*h)/60;
    hc = 0.024265 * pow(w,0.5378)*pow(h,0.3964);
    bd = 0.0333 * pow(w,0.6157-0.0188*log10(w))*pow(h,0.3);
    cout << fixed << setprecision(14) << mt << "\n" << hc << "\n" << bd;
}