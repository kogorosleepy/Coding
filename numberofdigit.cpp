#include<bits/stdc++.h>
using namespace std;

long long digits(long long n){
    long long nd = 1, k=1, pten = 10;
    while(n >= pten){
        nd += pten/10*k*9;
        k++;
        pten *=10;
    }
    nd += k*(n-(pten/10)+1);
    return nd;
}

int main(){
    long long m,n,cnt=0;
    cin >> m >> n;    
    cout << (digits(n) - digits(m-1));

}