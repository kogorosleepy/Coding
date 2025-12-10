#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<char> x,y;
    string a,b;
    getline(cin, a);
    getline(cin, b);

    for(auto c : a){
        if(c != ' '){
            x.insert(toupper(c));
        }
    }

    for(auto c : b){
        if(c != ' '){
            y.insert(toupper(c));
        }
        
    }

    if(x == y){
        cout << "YES";
    }
    else cout << "NO";

    return 0;

}