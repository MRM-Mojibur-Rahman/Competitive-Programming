#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x = x % m;
        mp[x]++;
    }
    int ans = 0;

    (mp[0] > 0) ? ans++ : 0;
   
    for (int i = 01; i <= m / 2; i++)
    {
        if (i != m - i)
        {
            if (mp[i] == mp[m - i] && mp[i]!=0 )
                ans++;
            else 
                ans += max(mp[i], mp[m - i]) - min(mp[i], mp[m - i]);
        }
        else
            ans += (mp[i] > 0);
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
