#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;

    map<int, int> mp;
    int ans = 0;

    for (int x : a)
    {
        if (mp[k - x] > 0)
        {
            ans++;
            mp[k - x]--;
        }
        else
        {
            mp[x]++;
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
