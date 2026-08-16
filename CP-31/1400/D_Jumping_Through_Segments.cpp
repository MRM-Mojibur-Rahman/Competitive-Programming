#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> p(n);

    vector<ll> mnPolls(n);
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        p[i] = {x, y};
    }

    auto ok = [&](ll k)
    {
        int l = -k, r = k;

        for (int i = 0; i < n; i++)
        {
            if (r < p[i].first || l > p[i].second)
                return false;
            int tem1 = p[i].first, tem2 = p[i].second;
            r = min(r, tem2) + k;
            l = max(l, tem1) - k;
        }

        return true;
    };

    int le = 0, ri = 1000000000;
    int ans = 0;
    while (le <= ri)
    {
        int mid = le + (ri - le) / 2;
        if (ok(mid))
        {
            ans = mid;
            ri = mid - 1;
        }
        else
            le = mid + 1;
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
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve()
// {
//     ll n;
//     cin >> n;
//     vector<pair<ll, ll>> p(n);

//     vector<ll> mnPolls(n);
//     for (ll i = 0; i < n; i++)
//     {
//         ll x, y;
//         cin >> x >> y;
//         p[i] = {x, y};
//     }
//     if (n == 1)
//     {
//         cout << min(p[0].first, p[0].second) << endl;
//         return;
//     }

//     if (min(abs(p[n - 2].first - p[n - 1].first), abs(p[n - 2].first - p[n - 1].second)) >
//         min(abs(p[n - 2].second - p[n - 1].first), abs(p[n - 2].second - p[n - 1].second)))
//     {

//         mnPolls[n - 2] = p[n - 2].second;
//     }
//     else
//         mnPolls[n - 2] = p[n - 2].first;

//     if (min(abs(p[n - 2].first - p[n - 1].first), abs(p[n - 2].second - p[n - 1].first)) >
//         min(abs(p[n - 2].first - p[n - 1].second), abs(p[n - 2].second - p[n - 1].second)))
//     {
//         mnPolls[n - 1] = p[n - 1].second;
//     }
//     else
//         mnPolls[n - 1] = p[n - 1].first;

//     for (ll i = n - 3; i >= 0; i--)
//     {
//         if (abs(mnPolls[i + 1] - p[i].first) > abs(mnPolls[i + 1] - p[i].second))
//         {
//             mnPolls[i] = p[i].second;
//         }
//         else
//             mnPolls[i] = p[i].first;
//     }

//     auto ok = [&](ll k)
//     {
//         ll lst = 0;

//         for (ll i = 0; i < n; i++)
//         {

//             if (lst > p[i].first)
//             {

//                 if (lst - k <= p[i].second)
//                 {
//                     ll tem = lst-k;
//                     lst = max(tem,mnPolls[i]);
//                 }
//                 else
//                     return false;
//             }
//             else
//             {
//                 if (lst + k >= p[i].first)
//                 {
//                     ll tem = lst+k;
//                     lst = min(tem,mnPolls[i]);
//                 }
//                 else
//                     return false;
//             }
//         }

//         return true;
//     };

//     ll l = 0, r = 10e9 + 10;
//     ll ans = r;
//     ll mid = l + (r - l) / 2;

//     while (l <= r)
//     {
//         mid = l + (r - l) / 2;

//         if (ok(mid))
//         {
//             r = mid - 1;
//             ans = mid;
//         }
//         else
//             l = mid + 1;
//     }
//     cout << ans << endl;
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

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve()
// {
//     ll n;
//     cin >> n;
//     vector<pair<ll, ll>> p(n);
//     vector<ll> op(n);
//     for (ll i = 0; i < n; i++)
//     {
//         ll x, y;
//         cin >> x >> y;
//         p[i] = {x, y};
//     }
//     for (ll i = 1; i < n; i++)
//     {
//         if (p[i].first >= p[i - 1].second )
//           {  op[i - 1] = 1;}
//         else
//         {
//             if(p[i].first>=p[i-1].first && p[i].second >=p[i].second) op[i-1]=1;
//             else
//             op[i - 1] = 0;}
//     }
//     auto ok = [&](ll k)
//     {
//         ll lst = 0;
//         for (ll i = 0; i < n; i++)
//         {
//             if (p[i].first >= lst)
//             {
//                 if (lst + k >= p[i].first)
//                 {
//                     if (op[i])
//                     {
//                         lst = min(p[i].second, lst + k);
//                     }
//                     else
//                         lst = min(p[i].first, lst + k);
//                 }
//                 else
//                     return false;
//             }
//             else
//             {
//                 if (lst <= p[i].second + k)
//                 {
//                     if (op[i])
//                     {
//                         lst = max(p[i].second, lst - k);
//                     }
//                     else
//                         lst = max(p[i].first, lst - k);
//                 }
//                 else
//                     return false;
//             }
//         }
//         return true;
//     };
//     ll l = 0, r = 10e9 + 10;
//     ll ans = r;
//     ll mid = l + (r - l) / 2;
//     while (l <= r)
//     {
//         mid = l + (r - l) / 2;
//         if (ok(mid))
//         {
//             r = mid - 1;
//             ans = mid;
//         }
//         else
//             l = mid + 1;
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
