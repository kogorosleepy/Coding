#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n;
    string s,l,number,name = "";
    map<string,string> book;
    map<string,string> book2;

    for(int i=0;i<n;i++){
        cin >> s >> l >> number;
        name = s + " " + l;
        book[name] = number;
        book2[number] = name;
    }

    cin >> m;
    for(int i=0;i<m;i++){
        string g;
        getline(cin >> ws,g);
        auto it = book.find(g);
        auto it2 = book2.find(g);
        if(it != book.end()){
            cout << g << " --> " << it->second << "\n";
        }
        else if(it2 != book2.end()){
            cout << g << " --> " << it2->second << "\n";
        }
        else{
            cout << g << " --> Not found\n";
        }
    }
}