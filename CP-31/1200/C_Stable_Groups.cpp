#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<ll> difa;
    for (ll i = 01; i < n; i++)
    {
        if (a[i] - a[i - 1] > x)
            difa.push_back(a[i] - a[i - 1]);
    }
    sort(difa.begin(), difa.end());
    // for(auto it:difa) cout<<it<<" ";
    ll cnt = difa.size() + 1, len = difa.size();
    for (ll i = 0; i < len; i++)
    {
        if (k == 0)
            break;

        if (difa[i] <= 2 * x)
            cnt--, k--;
        else if (difa[i] <= k * (2 * x))
        {
            cnt--, k -= difa[i] / (2 * x);
        }
    }
    cout << cnt << endl;
    return 0;
}
