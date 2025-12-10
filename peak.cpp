#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double num[n];
    for(int i=0;i<n;i++){
        cin >> num[i];
    } 
    int cnt=0;
    for(int i=1;i<n-1;i++){
        if(num[i-1]<num[i] && num[i+1]<num[i]) cnt++;
    }

    cout << cnt;
}