#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d1, m1, y1, d2, m2, y2;
    int mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    int sum = 0,s1=0,s2=0;

    for (int i = m1 - 1; i < 12; i++)
    {
        s1 += mon[i];
        int ychk = y1 - 543;
        int chk = 0;

        if (i == 1)
        {
            if (ychk % 4 == 0)
            {
                if (ychk % 100 == 0)
                {
                    if (ychk % 400 == 0)
                        chk = 1;
                }
                else
                    chk = 1;
            }

            if (chk == 1)
                s1++;
        }

        
    }
    s1 = s1 - d1 + 1;


    for(int i=0;i<m2-1;i++){
        s2 += mon[i];
        int chk = 0 , yc = y2 -543;
        if (i == 1)
        {
            if (yc % 4 == 0)
            {
                if (yc % 100 == 0)
                {
                    if (yc % 400 == 0)
                        chk = 1;
                }
                else
                    chk = 1;
            }

            if (chk == 1)
                s1++;
        }
    }
    
    s2 += d2 - 1;
    


    int s3 = y2 - y1 - 1;
    s3 *= 365;
    sum  = s1 + s2 + s3;
    double ph=(2*M_PI*sum)/23,em=(2*M_PI*sum)/28,in=(2*M_PI*sum)/33;
    cout << sum << " " << round(sin(ph)*100.0)/100.0 << " " << round(sin(em)*100.0)/100.0 << " " << round(sin(in)*100.0)/100.0;
    
}