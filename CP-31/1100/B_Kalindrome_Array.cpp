#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    auto check = [&](int x)
    {
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != x)
                b.push_back(a[i]);
        }
        int len = b.size();
        for (int i = 0; i * 2 < len; i++)
        {
            if (b[i] != b[len - 1 - i])
                return false;
        }
        return true;
    };

    for (int i = 0; i * 2 < n; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            if (check(a[i]) || check(a[n - i - 1]))
                cout << "YES\n";
            else
            {
                cout << "NO\n";
            }
            return;
        }
    }
    cout << "YES\n";
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
