#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> m;
    cin >> n;
    int fi[101][101],d;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> fi[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> d;
            cout << fi[i][j] + d << " ";
        }
        cout << "\n";
    }

    return 0;
}

