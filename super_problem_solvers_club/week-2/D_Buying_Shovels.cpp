#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int>divi;
    for (int i = 1; i*i<= n; i++)
    {
        if(n%i==0)
        {
            divi.push_back(i);
            divi.push_back(n/i);
        }
    }
    sort(divi.rbegin(),divi.rend());
    int len = divi.size();
    for (int i = 0; i < len; i++)
    {
        if(divi[i]<=k)
        {
            cout<<n/divi[i]<<endl;
            return ;
        }
    }
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
