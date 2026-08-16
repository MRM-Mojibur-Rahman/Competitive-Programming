#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &it : a)
        cin >> it;
    ll ans = a[0];
    vector<ll> diff;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ll x = abs(a[i] - a[j]);
            ans = min(x, ans);
            diff.push_back(x);
        }
        ans = min(a[i], ans);
    }

    if (k >= 3)
    {
        cout << 0 << endl;
        return;
    }
    if (k == 1)
    {
        cout << ans << endl;
        return;
    }
    sort(diff.begin(), diff.end());
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(diff.begin(), diff.end(), a[i]);

        if (it != diff.end())
        {
            ans = min(ans, abs(*it - a[i]));
        }
        if (it != diff.begin())
        {
            it--;
            ans = min(ans, abs(*it - a[i]));
        }
    }
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
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve()
// {
//     ll n, k;
//     cin >> n >> k;
//     vector<ll> a(n + 1);
//     ll Amn = LLONG_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         Amn = min(Amn, a[i]);
//     }
//     if (k >= 3)
//     {
//         cout << 0 << endl;
//         return;
//     }
//     ll mn = LLONG_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         for (int f = i + 1; f < n; f++)
//         {
//             mn = min(abs(a[i] - a[f]), mn);
//         }
//     }
//     if (k == 1)
//     {
//         cout << min(Amn, mn) << endl;
//         return;
//     }
//     a[n] = mn;
//     for (int i = 0; i < n + 1; i++)
//     {
//         for (int f = i + 1; f < n + 1; f++)
//         {
//             mn = min(abs(a[i] - a[f]), mn);
//         }
//     }
//     cout << min(Amn,mn)<< endl;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
