#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    vector<int> mech(n);
    for (auto &it : mech)
        cin >> it;
    auto ok = [&](ll sec)
    {
        ll cnt = 0;
        for (auto i : mech)
        {
            cnt += (sec / i);
            if (cnt >= t)
            return true;
        }
    
            return false;
    };
    ll l = 0, r = 1e18, ans = 1e18;
    while (l <= r)
    {
        ll mild = (l + r) / 2;
        if (ok(mild))
        {
            ans = mild;
            r = mild - 1;
        }
        else
        {
            l = mild + 1;
        }
    }
    cout<<ans<<endl;

    return 0;
}
