#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<(n*2)-1;j++){
            if(i == n-1) cout << '*';
            else if(i+j == n-1 || j-i == n-1) cout << '*';
            else if(j < n-1+i) cout << ".";
            else cout << " ";
        }
        cout << "\n";
    }
}