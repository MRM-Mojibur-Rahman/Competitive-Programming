#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll q;
    cin >> q;
    vector<ll> a(n + 1);
    vector<ll> update(n + 1, -1);
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    ll allUp = 0, allUpTime = -1;
    for (ll i = 1; i <= q; i++)
    {
        ll which;
        cin >> which;
        if (which == 1)
        {
            ll posi, val;
            cin >> posi >> val;
            if (update[posi] < allUpTime)
            {
                sum += val - allUp;
                a[posi] = val;
                update[posi] = i;
            }
            else
            {

                sum += val - a[posi];
                a[posi] = val;
                update[posi] = i;
            }
        }
        else
        {
            ll val;
            cin >> val;
            allUpTime = i;
            allUp = val;
            sum = val * n;
        }
        cout << sum << endl;
    }
    return 0;
}
