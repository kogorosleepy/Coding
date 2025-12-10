#include<bits/stdc++.h>
using namespace std;

long long powermod(long long a, long long k, long long m){
    if(k == 0) return 1;
    long long p = powermod(a,k/2,m);
    p = p*p % m;
    if(k%2 == 1){
        p = a*p % m;
    }
    return p;   
}

int main(){
    long long a,k,m;
    cin >> a >> k >> m;
    cout << powermod(a,k,m);
    return 0;
}