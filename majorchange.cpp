#include<bits/stdc++.h>
using namespace std;

int main(){
    string id1,id2;
    double gpa1,gpa2;
    char cp1,cp2,c11,c12,c21,c22;

    cin >> id1 >> gpa1 >> cp1 >> c11 >> c21;
    cin >> id2 >> gpa2 >> cp2 >> c12 >> c22;

    int chk1=0,chk2=0;
    
    if(cp1 == 'A' && c11 <= 67 && c21 <= 67) chk1 = 1;
    if(cp2 == 'A' && c12 <= 67 && c22 <= 67) chk2 = 1;

    if(chk1==1 && chk2==1){
        if(gpa1==gpa2){
            if(c11 == c12){
                if(c21 == c22) cout << "Both";
                else{
                    if(c21 < c22) cout << id1;
                    if(c22 < c21) cout << id2;
                }
            }
            else{
                if(c11 < c12) cout << id1;
                if(c12 < c11) cout << id2;
            }
        }
        else{
            if(gpa1 > gpa2) cout << id1;
            if(gpa2 > gpa1) cout << id2;
        }
    }
    else if(chk1 == 1 && chk2 == 0){
        cout << id1;
    }
    else if(chk2 == 1 && chk1 == 0){
        cout << id2;
    }
    else cout << "None";
}