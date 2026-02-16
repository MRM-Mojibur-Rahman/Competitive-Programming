#include <bits/stdc++.h>
using namespace std;
#define ll long long
int msb_pos(long long x)
{
    return 63 - __builtin_clzll(x);
}

void solve()
{
    ll n;
    cin >> n;

    int len = msb_pos(n);
    vector<ll> ans = {n};
    for (int i = 0; i <= len; i++)
    {
        if ((n >> i) & 1 && (n-(1<<i))!=0)
      
          ans.push_back((n-(1LL<<i)));
    }
    cout << ans.size() << endl;
    sort(ans.begin(), ans.end());
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
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
