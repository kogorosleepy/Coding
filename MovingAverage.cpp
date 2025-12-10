#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    double num[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> num[i][j];
        }
    }

    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            double k;
            k = (num[i][j] + num[i][j+1] + num[i][j-1] + num[i+1][j] + num[i-1][j] + num[i-1][j-1] + num[i+1][j+1] + num[i+1][j-1] + num[i-1][j+1])/9;
            cout << round(k*100)/100.0 << " ";
        }
        cout << "\n";
    }

}