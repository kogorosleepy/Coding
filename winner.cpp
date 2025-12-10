#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> win,lose;
    string team1,team2;
    while(cin >> team1 >> team2){
        win.insert(team1);
        lose.insert(team2);
    }

    for(auto team : lose){
        if(win.find(team) != win.end()){
            win.erase(team);
        }
    }

    if(!win.empty()){
        for(auto t : win){
            cout << t << " ";
        }
    }
    else cout << "None";
}