#include <bits/stdc++.h>
using namespace std;
#define ll long long
// ll lcm(ll a, ll b)
// {
//     return a * b / __gcd(a, b);
// }
ll safe_lcm(ll a, ll b, ll limit) {
    ll g = __gcd(a, b);
    a /= g;

    if (a > limit / b) return limit + 1; // prevent overflow
    return a * b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<int> a(k+1);
    for (int i = 1; i <= k; i++)
        cin >> a[i];
    ll ans = n;
    // for (int i = 1; i < (1<<k); i++)
    // {
    //     int lc = 1;
    //     int bit = 0;
    //     for (int j = 0; j < k; j++)
    //     {
    //         if (i & (1 << j))
    //         {
    //             lc = lcm(lc, a[j+1]);
    //             bit++;
    //         }
    //     }
    //     // cout<<lc<<endl;
    //     (bit % 2) ? ans -= n / lc : ans += n / lc;
    // }
    for (int i = 1; i < (1LL << k); i++)
{
    ll lc = 1;
    int bit = 0;

    for (int j = 0; j < k; j++)
    {
        if (i & (1LL << j))
        {
            lc = safe_lcm(lc, a[j+1], n);
            if (lc > n) break;
            bit++;
        }
    }

    if (lc > n) continue;

    (bit % 2) ? ans -= n / lc : ans += n / lc;
}
    cout<<ans<<endl;

    return 0;
}
