#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,cnt=0;
    set<int> num;

    while(cin >> n){
        cnt++;
        if(num.find(n) == num.end()){
            num.insert(n);
        }
        else{
            cout << cnt;
            return 0;
        }
    }

    cout << "-1";
    return 0;
}