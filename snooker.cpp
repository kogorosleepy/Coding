#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string ballws, ball;
        string color = "YGNBPK";
        bool chk = true;
        int cnt = 0;
        getline(cin >> ws, ballws);

        for (int i = 0; i < ballws.size(); i++)
        {
            if (ballws[i] != ' ')
                ball += ballws[i];
        }

        for (int i = 0; i < ball.size(); i++)
        {
            if(ball[0] != 'R'){
                chk = false;
                break;
            }
            if ((i % 2 != 0) && (ball[i] == 'R'))
            {
                chk = false;
                break;
            }
            if ((i % 2 == 0) && (ball[i] != 'R') && (ball[i] != 'Y'))
            {
                chk = false;
                break;
            }
            else if((i % 2 == 0) && (ball[i] == 'Y') && (i != 0)){
                string st = ball.substr(i);
                if(st.size() > 6){
                    chk = false;
                    break;
                }
                else{
                    for(int j=0;j<st.size();j++){
                        if(color[j] != st[j]){
                            chk = false;
                            break;
                        }
                    }

                    if(chk) break;
                }
            }
        }

        if (chk)
        {
            for (int g = 0; g < ball.size(); g++)
            {
                if (ball[g] == 'R')
                    cnt += 1;
                else if (ball[g] == 'Y')
                    cnt += 2;
                else if (ball[g] == 'G')
                    cnt += 3;
                else if (ball[g] == 'N')
                    cnt += 4;
                else if (ball[g] == 'B')
                    cnt += 5;
                else if (ball[g] == 'P')
                    cnt += 6;
                else if (ball[g] == 'K')
                    cnt += 7;
            }

            cout << cnt << endl;
        }
        else
            cout << "WRONG_INPUT" << endl;
    }
}