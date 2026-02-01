#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, c, d;
    cin >> n >> c >> d;
    vector<ll> qu(n), pre(n + 10, 0);
    for (auto &it : qu)
    {
        cin >> it;
    }
    sort(qu.rbegin(), qu.rend());
    pre[1] = qu[0];
    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + qu[i - 1];
    }
    if (qu[0] * d < c)
    {
        cout << "Impossible\n";
        return;
    }
    if (d <= n && pre[d] >= c)
    {
        cout << "Infinity\n";
        return;
    }
    else if ( d>n&& pre[n] >= c)
    {
        
        cout << "Infinity\n";
        return;
    }
    auto ok = [&](int k)
    {
        ll sum = (k + 1 <= n) ? pre[k + 1] : pre[n];
        ll par = d % (k + 1);
        if (par > n)
            par = n;
        ll will = sum * (d / (k + 1)) + pre[par];
        if(will>=c) return true;
         return false;
    };

    // Binary
    int l = 0, r = d, ans = 0, mid = 0;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
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
