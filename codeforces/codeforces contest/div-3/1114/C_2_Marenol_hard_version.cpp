#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    ll cnt = 0;

    ll oddA = 0, oddB = 0, evenA = 0, evenB = 0;

    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            oddA += a[i] - '0';
        else
            evenA += a[i] - '0';
        if (i % 2 == 0)
            oddB += b[i] - '0';
        else
            evenB += b[i] - '0';
    }

    if (oddA != oddB || evenA != evenB)
    {

        cout << -1 << endl;
        return;
    }

    vector<ll> even1, even0, odd1, odd0;
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (a[i] != b[i])
            {
                if (a[i] == '1')
                    even1.push_back(i);
                else
                    even0.push_back(i);
            }
        }
        else
        {
            if (a[i] != b[i])
            {

                if (a[i] == '1')
                    odd1.push_back(i);
                else
                    odd0.push_back(i);
            }
        }
    }

    ll ans = 0;

    ll len1 = odd0.size(), len2 = even0.size();

    // for (auto it : even0)
    //     cout << it << " ";
    // cout << endl;

    // for (auto it : even1)
    //     cout << it << " ";
    // cout << endl;

    for (ll i = 0; i < len1; i++)
    {

        ans += abs(odd0[i] - odd1[i]) / 2;
    }
    for (ll i = 0; i < len2; i++)
    {

        ans += abs(even0[i] - even1[i]) / 2;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
