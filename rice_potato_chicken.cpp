#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;
    vector<long long> store;
    for (long long i = 0; i < n; i++)
    {
        long long k;
        cin >> k;
        store.push_back(k);
    }

    for (long long i = 0; i < q; i++)
    {
        long long k;
        cin >> k;
        if (k == 1)
        {
            long long j;
            cin >> j;
            store.push_back(j);
        }
        else if (k == 2)
        {
            store.erase(store.begin());
            // for(long long g=0;g<store.size();g++){
            //     cout << store[g]<< " ";
            // }
        }
        else if (k == 3)
        {
            store.pop_back();
        }
        else if (k == 4)
        {
            long long j;
            cin >> j;
            for (long long g = 0; g < store.size(); g++)
            {
                store[g] += j;
            }
        }
        else if (k == 5)
        {
            long long j;
            cin >> j;
            for (long long g = 0; g < store.size(); g++)
            {
                if (store[g] < j)
                {   
                    store.erase(store.begin() + g );
                    g--;
                }
            }
        }
        else if (k == 6)
        {
            long long j, ne = 0,g = store.size()-1;
            cin >> j;
            while(j--){
                ne += store[g];
                store.pop_back();
                g--;
            }
            store.insert(store.begin(), ne);
        }
        // for(auto &i: store)cout<<i <<" ";
        // cout <<'\n';
    }

    long long sum = 0;
    for (auto i : store)
    {
        sum += i;
    }

    cout << store.size() << " " << sum;
}