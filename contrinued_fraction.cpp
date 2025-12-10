#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    int k;

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        a[i] = k;
    }

    for (int i = 0; i < n; i++)
    {
        int j = i;
        double x = a[i];
        while (j > 0)
        {
            x = 1 / x;
            j--;
            x = a[j] + x;
        }
        cout << setprecision(10) << x << "\n";
    }
}