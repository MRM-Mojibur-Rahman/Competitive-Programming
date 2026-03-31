#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<ll, ll>> cord(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        ll x, y;
        cin >> x >> y;
        cord[i] = {x, y};
    }
    ll mn1 = 1e10, mn2 = 1e10;
    auto [x1, y1] = cord[a];
    auto [x2, y2] = cord[b];
    ll cost = abs(x1 - x2) + abs(y1 - y2);
    for (ll i = 01; i <= k; i++)
    {
        auto [x, y] = cord[i];
        mn1 = min(mn1, (abs(x1 - x) + abs(y1 - y)));
        mn2 = min(mn2, (abs(x2 - x) + abs(y2 - y)));
    }

    cout << min(cost, mn1 + mn2) << endl;
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
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve()
// {
//     ll n, k, a, b;
//     cin >> n >> k >> a >> b;
//     vector<pair<ll, ll>> cord(n + 1);
//     for (ll i = 1; i <= n; i++)
//     {
//         ll x, y;
//         cin >> x >> y;
//         cord[i] = {x, y};
//     }

//     if (a <= k && b <= k)
//     {
//         cout << 0 << endl;
//         return;
//     }
//     ll mn1 = LONG_MAX, mn2 = LONG_MAX;
//     auto [x1, y1] = cord[a];
//     auto [x2, y2] = cord[b];
//     ll cost = abs(x1 - x2) + abs(y1 - y2);
//     for (ll i = 01; i <= k; i++)
//     {
//         auto [x, y] = cord[i];
//         mn1 = min(mn1, (abs(x1 - x) + abs(y1 - y)));
//         mn2 = min(mn2, (abs(x2 - x) + abs(y2 - y)));
//     }

//     if (mn1 == LONG_MAX || mn2 == LONG_MAX)
//     {
//         cout << cost << endl;
//         return;
//     }

//     cout << min(cost, mn1 + mn2) << endl;
// }

// int main()
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
