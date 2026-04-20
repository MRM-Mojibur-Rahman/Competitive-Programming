#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ceil_div(ll lob ,ll hor)
{
    return (lob+hor-1)/hor;
}

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;
    ll ans = ceil_div((k+k*y-1),(x-1)) + k;
    cout<<ans<<endl;
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
