// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     string a;
//     cin >> a;
//     ll n = a.size();
//     ll tem = 0, cnt = 0;
//     map<ll, ll> mp;
//     for (ll i = 0; i < n; i++)
//     {
//         if (a[i] == 'o')
//         {
//             if (tem > 0)
//                 cnt += (tem - 1);
//             mp[i] = cnt;
//             tem = 0;
//         }
//         else
//         {
//             tem++;
//         }
//     }
//     cnt = 0;
//     tem = 0;
//     for (ll i = n - 1; i >= 0; i--)
//     {
//         if (a[i] == 'o')
//         {
//             if (tem > 0)
//                 cnt += (tem - 1);
//             mp[i] *= cnt;
//             tem = 0;
//         }
//         else
//         {
//             tem++;
//         }
//     }
//     ll ans = 0;
//     for (auto [x, y] : mp)
//     {

//         ans += y;
//     }
//     cout << ans << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;
    ll n = a.size();
    ll tem = 0, cnt = 0;
    map<ll, ll> mp;
    // for (ll i = 0; i < n; i++)
    // {
    //     if (a[i] == 'o')
    //     {
    //         if (tem > 0)
    //             cnt += (tem - 1);
    //         mp[i] = cnt;
    //         tem = 0;
    //     }
    //     else
    //     {
    //         tem++;
    //     }
    // }
    int r = 0, l = 0;
    while (r < n)
    {
        if (a[r] == 'o')
        {
            int x = r - l - 1;
            if (x > 0)
                cnt += x;
            mp[r] = cnt;
            r++;
            l = r;
        }
        while (r < n && a[r] == 'v')
            r++;
    }

    cnt = 0;
    tem = 0;

    r = n - 1, l = n - 1;
    while (r >= 0)
    {
        if (a[r] == 'o')
        {
            int x = l-r - 1;
            if (x > 0)
                cnt += x;
            mp[r] *= cnt;
            r--;
            l = r;
        }
        while (r >= 0 && a[r] == 'v')
            r--;
    }
    ll ans = 0;
    for (auto [x, y] : mp)
    {
        // cout << x << " " << y << endl;

        ans += y;
    }
    cout << ans << endl;

    return 0;
}
