#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    map<string,double> ice;
    cin >> n;

    while(n--){
        string s;
        double d;
        cin >> s >> d;
        ice[s] =  d;
    }
    map<string,double> sale;
    double sum=0;
    cin >> m;
    
    while(m--){
        string s;
        double t;
        cin >> s >> t;
        if(ice.find(s) != ice.end()){
            sale[s] += t*ice[s];
            sum += t*ice[s];
        }
    }


    if(sale.size() != 0){
        double mx = 0;
        string name;
        for(auto &it : sale){
            if(it.second > mx){
                mx = it.second;
            }
        }
        
        cout << "Total ice cream sales: " << sum << "\nTop sales: " ;

        for(auto &i : sale){
            if(i.second == mx){
                cout << i.first << " ";
            }
        }

    }
    else{
        cout << "No ice cream sales";
    }

    return 0;
}