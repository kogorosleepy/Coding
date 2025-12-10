#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cin >> m;

    int puz[m*m],zero;

    for(int i=0;i<m*m;i++){
        cin >> puz[i];
        if(puz[i] == 0) zero = i/m;
    }

    int inv=0;

    for(int i=0;i<m*m;i++){
        for(int j=i;j<m*m;j++){
            if((puz[i]>puz[j]) && (puz[i] != 0) && (puz[j] != 0)) inv++;
        }
    }

    if((m%2 != 0) && (inv%2 == 0)){
        cout << "YES";
    }
    else if((m%2 == 0) && (inv%2 != 0) && (zero%2 == 0)){
        cout << "YES";
    }
    else if((m%2 == 0) && (inv%2 == 0) && (zero%2 != 0)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

}