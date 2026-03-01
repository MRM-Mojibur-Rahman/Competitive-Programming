#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &it : a)
        cin >> it;
    vector<int> bits(30, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (a[i] & (1 << j))
                bits[j]++;
        }
    }
    int z = 0;
    for (int j = 0; j < 30; j++)
    {
        if (bits[j] != 0)
        {
            z = __gcd(z, bits[j]);
        }
    }
    if (z == 0)
    {
        for (int i = 1; i <= n; i++)
            cout << i << " ";
        cout << endl;
        return;
    }
    set<int> ans;
    for (int i = 1; i * i <= z; i++)
        if (z % i == 0)
        {
            ans.insert(i);
            ans.insert(z / i);
        }
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