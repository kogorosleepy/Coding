#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    map<string,int> lm;
    vector<string> lotto;
    while(cin >> ch){
        string s;
        if(ch == 'E') break;
        if(ch == 'K'){
            cin >> s;
            lotto.push_back(s);
            lm[s] += 1;
        }
        else if(ch == 'P'){
            cin >> s;
            if(lm.find(s) != lm.end()){
                cout << lm[s] << "\n";
            }
            else{
                cout << "0" << "\n";
            }
        }
        else if(ch == 'H'){
            int mx = INT_MIN;
            for(auto &i : lm){
                if(i.second > mx) mx = i.second;
            }
            map<string,int> chk;
            for(auto &i : lotto){
                chk[i] += 1;
                if(chk[i] == mx){
                    cout << i << "\n";
                    break;
                }
            }
        }
        else if(ch == 'N'){
            cout << lm.size() << "\n";
        }
    }
}