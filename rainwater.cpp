#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt=0;
    cin >> n;
    int fl[n],l[n],r[n];

    for(int i=0;i<n;i++){
        cin >> fl[i];
        l[i] = fl[i];
        r[i] = fl[i];
    }

    for(int i=1;i<n;i++){
        l[i] = max(l[i],l[i-1]);
    }

    for(int i=n-2;i>0;i--){
        r[i] = max(r[i],r[i+1]);
    }

    for(int i=0;i<n;i++){
        cnt += min(r[i],l[i]) - fl[i];
    }

    cout << cnt;
}