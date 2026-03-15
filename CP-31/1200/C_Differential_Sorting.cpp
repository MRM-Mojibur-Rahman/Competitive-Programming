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

    if (a[n - 1] < a[n - 2])
    {
        cout << -1 << endl;
        return;
    }
    vector<tuple<int, int, int>> ans;
    int posi = (a[n - 1] >= 0 ? n - 1 : -1);

    for (int i = n - 3; i >= 0; i--)
    {
        if (a[i + 1] < a[i])
        {
            if (a[i + 1] < 0 && posi == -1)
            {
                cout << -1 << endl;
                return;
            }
            if (a[i + 1] < 0)
            {
                ans.push_back({i + 1, i + 2, posi + 1});
                a[i] = a[i + 1] - a[posi];
            }
            else
            {
                ans.push_back({i + 1, i + 2, i + 3});
                a[i] = a[i + 1] - a[i + 2];
            }
        }
        posi = ((a[i + 1] >= 0) ? i + 1 : posi);
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            cout << -1 << endl;
            return;
        }
    }

    cout << ans.size() << endl;
    for (auto [x, y, z] : ans)
    {
        cout << x << " " << y << " " << z << endl;
    }
    
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
