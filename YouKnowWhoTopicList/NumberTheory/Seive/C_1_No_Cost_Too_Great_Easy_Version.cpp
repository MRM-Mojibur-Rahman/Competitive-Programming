#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6;
vector<int> spf(N + 1, 0);
void buildSPF() // Nlog(log(n))
{
    for (int i = 2; i <= N; i += 2)
        spf[i] = 2;

    for (int i = 3; 1LL * i * i <= N; i += 2)
    {
        if (spf[i] == 0)
        {
            spf[i] = i;
            for (int j = i * i; j <= N; j += 2 * i)
            {
                if (spf[j] == 0)
                    spf[j] = i;
            }
        }
    }

    for (int i = 3; i <= N; i += 2)
        if (spf[i] == 0)
            spf[i] = i;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x = a[i];

        set<int> spfs;
        while (x > 1)
        {
            spfs.insert(spf[x]);
            x /= spf[x];
        }
        for (auto it : spfs)
            mp[it]++;
    }

    bool is = false;
    for (auto [x, y] : mp)
    {
        if (y > 1)
            is = true;
    }

    if (is)
    {
        cout << 0 << endl;
        return;
    }
    else if (mp[2] > 0)
    {
        cout << 1 << endl;
        return;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        int x = a[i] + 1;
        set<int> spfs;
        while (x > 1)
        {
            spfs.insert(spf[x]);
            x /= spf[x];
        }
        for (auto it : spfs)
        {
            if (mp[it] >= 1)
                is = true;
        }
    }

    if (is)
    {
        cout << 1 << endl;
        return;
    }

    cout << 2 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    buildSPF();
    while (t--)
    {
        solve();
    }
    return 0;
}
