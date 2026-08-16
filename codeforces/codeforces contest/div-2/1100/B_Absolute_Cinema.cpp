// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve()
// {
//     ll n;
//     cin >> n;
//     vector<ll> a(n), b(n);
//     for (auto &it : a)
//         cin >> it;
//     for (auto &it : b)
//         cin >> it;
//     vector<ll> ab;
//     ll ans = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         ab.push_back(a[i]);
//         ab.push_back(b[i]);
//     }
//     sort(ab.rbegin(), ab.rend());
//     for (ll i = 0; i < n; i++)
//     {
//         ans += ab[i];
//     }
//     cout << ans << endl;
// }

// ll main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    ll mx = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            swap(a[i], b[i]);
        }

        mx = max(a[i], mx);
    }
    ll ans = mx;
    for (ll i = 0; i < n; i++)
    {
        ans += b[i];
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
