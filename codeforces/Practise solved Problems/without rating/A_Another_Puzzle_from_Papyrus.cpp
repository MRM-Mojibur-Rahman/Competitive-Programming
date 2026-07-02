#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> a(n), b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;

    bool f = true;
    int cost = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            f = false;
            break;
        }

        cost += a[i] - b[i];
    }
    if (f && cost <= c)
    {
        cout << cost << endl;
        return;
    }
    if(!f) cost = INT_MAX;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int cst = c;
    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(a.begin(), a.end(), b[i]);
        if (it == a.end())
        {
            cout << -1 << endl;
            return;
        }
        cst += (*it - b[i]);
        *it = -1;
    }
    cout << min(cost, cst) << endl;
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
