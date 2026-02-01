#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    multiset<int> prices;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        prices.insert(x);
    }
    vector<int> customer(m);
    for (int i = 0; i < m; i++)
    {
        cin >> customer[i];
    }
    for (int i = 0; i < m; i++)
    {
        auto it = prices.upper_bound(customer[i]);
        if(it==prices.begin())
        {
            cout<<-1<<endl;
            continue;
        }
        else 
        {
            cout<<*(--it)<<endl;
            prices.erase(it);
        }
        
    }

    return 0;
}
