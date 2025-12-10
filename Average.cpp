#include<bits/stdc++.h>
using namespace std;

int main(){
    double n,sum=0,cnt=0;
    while(n!=-1){
        cin >> n;
        if(n!=-1){
            sum += n;
            cnt++;
        }
    }

    sum /= cnt;
    if(cnt>0) cout << round(sum*100.0)/100.0;
    else cout << "No Data";

}