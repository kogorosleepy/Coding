#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    string s,t="k";
    getline(cin , s);
    vector<tuple<char,int,int>> res;
    for(int i=0;i<s.size();i++){
        if(s[i] != ' '){
            t+= s[i];
        }
    }

    for(int i=1;i<t.size()-1;i++){
        int start,stop;
        if(t[i] != t[i-1]){
            start = i-1;
            for(int j=i;j<t.size();j++){
                if(t[j] != t[j+1]){
                    stop = j;
                    res.push_back(make_tuple(t[i],start,stop));
                    break;
                }
                else{
                    if(j == t.size()-1){
                        stop = j;
                        res.push_back(make_tuple(t[i],start,stop));
                        break;
                    }
                    continue;
                }
            }
        }
    }
    if(t[t.size()-1] != t[t.size()-2]) res.push_back(make_tuple(t[t.size()-1],t.size()-2,t.size()-1));
    vector<int> chk;
    for(auto &tuple : res){
        
        chk.push_back(get<2>(tuple) - get<1>(tuple));
    }

    int mx = *max_element(chk.begin(), chk.end());
    sort(res.begin(),res.end());
    for(auto &tuple : res){
        if(get<2>(tuple) - get<1>(tuple) == mx){
            cout << get<0>(tuple) << " --> x[ " << get<1>(tuple) << " : " << get<2>(tuple) << " ]\n";
        }
    }
    
}