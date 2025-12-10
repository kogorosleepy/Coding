#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, string> ttp;
    map<int,char> ptt = {{2,'a'},{22,'b'},{222,'c'},{3,'d'},{33,'e'},{333,'f'},{4,'g'},{44,'h'},{444,'i'},{5,'j'},{55,'k'},{555,'l'},{6,'m'},{66,'n'},{666,'o'},{7,'p'},{77,'q'},{777,'r'},{7777,'s'},{8,'t'},{88,'u'},{888,'v'},{9,'w'},{99,'x'},{999,'y'},{9999,'z'},{0,' '}};

    ttp['a'] = "2";
    ttp['b'] = "22";
    ttp['c'] = "222";
    ttp['d'] = "3";
    ttp['e'] = "33";
    ttp['f'] = "333";
    ttp['g'] = "4";
    ttp['h'] = "44";
    ttp['i'] = "444";
    ttp['j'] = "5";
    ttp['k'] = "55";
    ttp['l'] = "555";
    ttp['m'] = "6";
    ttp['n'] = "66";
    ttp['o'] = "666";
    ttp['p'] = "7";
    ttp['q'] = "77";
    ttp['r'] = "777";
    ttp['s'] = "7777";
    ttp['t'] = "8";
    ttp['u'] = "88";
    ttp['v'] = "888";
    ttp['w'] = "9";
    ttp['x'] = "99";
    ttp['y'] = "999";
    ttp['z'] = "9999";

    string ord;
    while (cin >> ord)
    {

        string txt;
        getline(cin,txt);
        txt.erase(0,1);
        cout << ">> ";
        if(ord == "T2K"){
            for(auto i : txt){
                i = tolower(i);
                if(isalpha(i)){
                    cout << ttp[i] << " ";
                }
                else if(i == ' '){
                    cout << "0" << " ";
                }
            }
        }
        else if(ord == "K2T"){
            stringstream ss(txt);
            string num;
            while(ss >> num){
                cout << ptt[stoi(num)];
            }
        }
        cout << "\n";
    }
}