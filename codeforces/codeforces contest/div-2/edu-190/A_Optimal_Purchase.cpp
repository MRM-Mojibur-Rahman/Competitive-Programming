#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    if (a * 3 <= b)
    {
        cout << n * a << endl;
    }
    else
    {

        ll ans = (n / 3LL) * b;
        // cout<<ans<<endl;
        if ((n % 3) * a < b)
            ans += ((n % 3) * a);
        else
            ans += b;
        cout << ans << endl;
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
