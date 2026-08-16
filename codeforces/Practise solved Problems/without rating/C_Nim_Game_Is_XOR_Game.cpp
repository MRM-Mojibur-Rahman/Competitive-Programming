#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 998244353;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    vector<int> bit(30, 0);

    for (auto it : a)
        for (int i = 0; i < 30; i++)
        {
            if (it & (1 << i))
                bit[i]++;
        }
    int ans = 1;
    for (int i = 0; i < 30; i++)
    {
        if (bit[i] %2)
            ans = (ans * bit[i]) % mod;
    }

    cout << ans  << endl;
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
