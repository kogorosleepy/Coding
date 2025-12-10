#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    int cnt=0;
    cin >> a;
    getline(cin>>ws, b);
    for(int i=0;i<b.size();i++){
        if(b[i]==a[0] && i == 0 && (b[i+a.size()] == ' ' || b[i+a.size()] == '.' || b[i+a.size()] == '"' || b[i+a.size()] == ',' || b[i+a.size()] == '\'' || b[i+a.size()] == ')' || b[i+a.size()] == '(')){
            string k = b.substr(i,a.size());
            if(k == a) cnt++;
        }
        else if(i+ a.size() > b.size()){
            break;
        }
        else if(b[i]==a[0] && (b[i-1] == ' ' || b[i-1] == '.' || b[i-1] == '"' || b[i-1] == ',' || b[i-1] == '\'' || b[i-1] == ')' || b[i-1] == '(') && (b[i+a.size()] == ' ' || b[i+a.size()] == '.' || b[i+a.size()] == '"' || b[i+a.size()] == ',' || b[i+a.size()] == '\'' || b[i+a.size()] == ')' || b[i+a.size()] == '(')){
            string k = b.substr(i,a.size());
            if(k == a) cnt++;
        }
        else if(b[i]==a[0] && i+a.size() == b.size() && (b[i-1] == ' ' || b[i-1] == '.' || b[i-1] == '"' || b[i-1] == ',' || b[i-1] == '\'' || b[i-1] == ')' || b[i-1] == '(') ){
            string k = b.substr(i,a.size());
            if(k == a) cnt++;
        }

    }

    cout << cnt;
}