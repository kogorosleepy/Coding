#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y, mn1 = INT_MAX, mx1 = INT_MIN, mn2 = INT_MAX, mx2 = INT_MIN;
    int i=1;
    while(true){
        cin >> x;
        if(x != -998 && x != -999){
            cin >> y;
            if(i%2 != 0){
                mn1 = min(mn1,x);
                mx2 = max(mx2,x);
                mn2 = min(mn2,y);
                mx1 = max(mx1,y);
            }
            else if(i%2 == 0){
                mn1 = min(mn1,y);
                mx2 = max(mx2,y);
                mn2 = min(mn2,x);
                mx1 = max(mx1,x);
            }
        }
        else{
            break;
        }
        i++;
    }
    
    if(x == -998) cout << mn1 << " " << mx1;
    else if(x == -999) cout << mn2 << " " << mx2;

}