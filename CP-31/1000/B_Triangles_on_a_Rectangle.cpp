#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll ans = 0;
    for (int i = 0; i < 4; i++)
    {
        int k;
        cin >> k;
        vector<ll> tem(k);
        for (int j = 0; j < k; j++)
        {
            cin >> tem[j];
        }
        
        if (i < 2)
        {
            ans = max(ans, (tem.back() - tem.front()) * y);
        }
        else
        {
            ans = max(ans, (tem.back() - tem.front()) * x );
        }
    }
    cout << ans << endl;
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
