#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), bits(31, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        for (int j = 0; j < 30; j++)
        {
            if (a[i] & (1 << j))
                bits[j]++;
        }
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        bool ok = true;

        for (int j = 0; j < 30; j++)
        {
            if (bits[j] % i != 0)
                ok = false;
        }
        if (ok)
            ans.push_back(i);
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
