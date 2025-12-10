#include<bits/stdc++.h>
using namespace std;

int main(){
    double mn = INT_MAX , mx = INT_MIN , sum=0 , n;
    for(int i=0;i<4;i++){
        cin >> n;
        sum += n;
        if(n>mx) mx = n;
        if(n<mn) mn = n;
        
    }
    sum = sum - mn - mx;
    sum /=2;
    cout << round(sum*100.0)/100.0;
}