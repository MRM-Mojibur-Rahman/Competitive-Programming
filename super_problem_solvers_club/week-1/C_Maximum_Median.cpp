// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll n, k;
//     cin >> n >> k;
//     vector<ll> v(n);
//     for (auto &it : v)
//         cin >> it;
//     sort(v.begin(), v.end());
//     ll mild = v[n / 2];
//     ll cnt = 0;
//     for (ll i = n / 2 + 1; i < n; i++)
//     {
//         if (k == 0)
//             break;
//         if (mild == v[i])
//         {
//             cnt++;
//         }
//         else
//         {
//             ll difa = v[i] - mild;
//             if ((cnt + 1) * difa <= k)
//             {
//                 mild = v[i];
//                 // cout<<v[i];
//                 k -= (cnt+1) * difa;
//                 // cout<<k<<endl;
//             }
//             else
//                 break;
//         }
//     }
//     // cout<<mild<<endl;
//     if (k >= 0)
//     {
//         mild += k /( cnt+1);
//     }
//     cout << mild << endl;
//     return 0;
// }
// this is better version given by the chatgpt
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll n, k;
//     cin >> n >> k;

//     vector<ll> v(n);
//     for (auto &x : v) cin >> x;

//     sort(v.begin(), v.end());

//     ll mild = v[n / 2];
//     ll cnt = 1;  // median itself

//     for (ll i = n / 2 + 1; i < n; i++)
//     {
//         ll diff = v[i] - mild;
//         ll cost = diff * cnt;

//         if (cost <= k)
//         {
//             k -= cost;
//             mild = v[i];
//             cnt++;
//         }
//         else
//             break;
//     }

//     // distribute remaining k evenly
//     mild += k / cnt;

//     cout << mild << "\n";
// }
// binary scearch on answere
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    // function
    auto ok = [&](ll x)
    {
        ll cnt = 0;
        for (int i = n / 2; i < n; i++)
        {
            cnt += (v[i] < x) ? x - v[i] : 0;
        }
        return cnt <= k;
    };

    // binary search
    ll l = 1,
        r = 2e9, ans = 0, mild;
    while (l <= r)
    {
        mild = (l + r) / 2;
        if (ok(mild))
        {
            ans = mild;
            l = mild + 1;
        }
        else
            r = mild - 1;
    }
    cout << ans << endl;

    return 0;
}
