#include<bits/stdc++.h>
using namespace std;

int opr(int n,int s,map<int,int> &h,map<int,int> &x){
    int sum = 0;
    if(n < 0) return 0;
    if(s > n) return 0;
    if((h.find(n-s) != h.end()) && (x.find(s) != x.end())){
        sum = x[s] * h[n-s];
    }
    else{
        sum = 0;
    }
    return sum + opr(n,s+1,h,x);
}

int main(){
    int m,k,a,b;
    cin >> m >> k >> a >> b;
    map<int,int> h;
    map<int,int> x;
    while(m--){
        int c,d;
        cin >> c >> d;
        x[c] = d;
    }
    while(k--){
        int c,d;
        cin >> c >> d;
        h[c] = d;
    }
    for(int i=a;i<=b;i++){
        cout << opr(i,0,h,x) << " ";
    }
}