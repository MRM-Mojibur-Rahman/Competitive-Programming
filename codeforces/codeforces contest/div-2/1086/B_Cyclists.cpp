#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k, posi, m, ans = 0;
    cin >> n >> k >> posi >> m;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    if (posi > k)
    {
        vector<int> first;
        for (int i = 1; i < posi; i++)
            first.push_back(a[i]);
        sort(first.begin(), first.end());
        int sm = 0;
        for (int i = 0; i < posi - k; i++)
        {
            sm += first[i];
        }

        sm += a[posi];

        if (sm > m)
        {
            cout << 0 << endl;
            return;
        }
        m-=sm;
        ans++;
    }
    else
    {
        if (a[posi] > m)
        {
            cout << 0 << endl;
            return;
        }
        m -= a[posi];
        ans++;
    }

    int sum = a[posi];
    multiset<int> ms;
    for (int i = 1; i <= n; i++)
    {
        if (i != posi)
            ms.insert(a[i]);
    }
    int cnt = 0;
    for (auto it : ms)
    {
        if (cnt == n - k)
            break;
        sum += it;
        cnt++;
    }
    //
    cout << ans + m / sum << endl;
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
