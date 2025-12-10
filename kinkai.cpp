#include<bits/stdc++.h>
using namespace std;

long gcd(long a, long b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main(){
    string a,b,c;
    cin >> a >> b >> c;

    int u = stoi(a+b+c) - stoi(a+b);
    int d = pow(10,b.size()+c.size()) - pow(10,b.size());
    long k = gcd(u,d);
    cout << u/k << " / " << d/k;

}