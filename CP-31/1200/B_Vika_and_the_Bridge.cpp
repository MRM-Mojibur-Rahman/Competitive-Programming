#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, vector<int>> mp;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mp[x].push_back(i);
    }
    for (auto &[p, a] : mp)
        a.push_back(n + 1);

    // for (auto [p, a] : mp)
    // {
    //     int cnt = 1, last = 0;
    //     int len = 2;
    //     for (auto it : a)
    //     {
    //         cout << abs(last - it) << " ";
    //         if (abs(last - it) > len + 1 && cnt == 0)
    //         {
    //             break;
    //         }
    //         if (abs(last - it) > len + 1)
    //         {
    //             if (abs(last - it) <= 2 * len + 1)
    //                 cnt--;
    //             else
    //                 break;
    //         }
    //         last = it;
    //     }
    //     cout << endl;
    // }

    auto ok = [&](int len)
    {
        for (auto [p, a] : mp)
        {
            int cnt = 1, last = 0;
            bool is = true;
            for (auto it : a)
            {

                if (abs(last - it) > len + 1 && cnt == 0)
                {
                    is = false;
                    break;
                }
                if (abs(last - it) > len + 1)
                    if (abs(last - it) <= 2 * len + 2)
                        cnt--;
                    else
                    {
                        is = false;
                        break;
                    }
                last = it;
            }
            if (is)
                return true;
            // cout<<endl;
        }
        // cout<<endl;

        return false;
    };
    int l = 0, r = n, ans = n, mid = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            r = mid - 1;
            ans = mid;
        }
        else
            l = mid + 1;
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
