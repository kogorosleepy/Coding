#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,n;
    string ord;
    cin >> n;

    int red[n],blue[n];

    for(int i=0;i<n;i++){
        cin >> x >> y;
        if(i%2==0){
            red[i] = y;
            blue[i] = x;
        }
        else{
            red[i] = x;
            blue[i] = y;
        }
    }
    cin >> ord;
    int mn,mx;
    if(ord == "Zag-Zig"){
        mn = *min_element(red,red+n);
        mx = *max_element(blue,blue+n);
    }
    else if(ord == "Zig-Zag"){
        mn = *min_element(blue,blue+n);
        mx = *max_element(red,red+n);
    }

    cout << mn << " " << mx;
}