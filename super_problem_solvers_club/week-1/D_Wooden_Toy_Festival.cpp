#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    sort(a.begin(), a.end());

    auto ok = [&](int time)
    {
        int cnt = 2;
        int x = time + a[0];
        for (int i = 1; i < n; i++)
        {
            if (abs(x - a[i]) > time)
            {
                if (cnt == 0)
                    return false;
                cnt--;
            
                x = a[i] + time;
            }
        }
        
        
        return true;
    };
    int l = 0, r = 1e9, ans = 0, mid = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
            // cout<<"ehll"
            
        }
        else l = mid + 1;
    

    }
    // cout<<"ok "<<ok(13)<<endl;
    cout << ans << '\n';
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
