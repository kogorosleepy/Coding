#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int A[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    int command;
    while (true)
    {
        cin >> command;
        if (command == 1)
        {
            int a, k;
            cin >> a >> k;
            a = a-1;
            for (int i = 0; i < n; i++)
            {
                A[a][i] *= k;
            }
        }
        if (command == 2)
        {
            int a, b, k;
            cin >> a >> b >> k;
            a = a-1;
            b = b-1;
            for (int i = 0; i < n; i++)
            {
                A[a][i] += A[b][i] * k;
            }
        }
        if (command == 3)
        {
            int a, b;
            cin >> a >> b;
            a = a-1;
            b = b-1;
            for (int i = 0; i < n; i++)
            {
                int temp = A[a][i];
                A[a][i] = A[b][i];
                A[b][i] = temp;
            }
        }
        if (command == -1)
        {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << A[i][j] << " ";
                }

                cout << "\n";

            }

            break;

        }
    }
}