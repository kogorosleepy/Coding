#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int w[n],fnd=0;
    for(int i=0;i<n;i++){
        cin >> w[i];
        fnd += w[i];
    }

    fnd -= m;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(w[i]+w[j] == fnd){
                if(i<j){
                    cout << i << " " << w[i] << "\n" << j << " " << w[j];
                }
                else{
                    cout << j << " " << w[j] << "\n" << i << " " << w[i];
                }
            }
        }
    }
}