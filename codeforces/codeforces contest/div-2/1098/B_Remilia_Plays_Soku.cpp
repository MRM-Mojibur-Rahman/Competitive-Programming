#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;
    ll ans = k;
    ans += min(abs(x1 - x2), n - abs(x1 - x2));
    if(n<=3) ans =1;
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
