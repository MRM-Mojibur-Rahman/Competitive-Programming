#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int z = 0;
    vector<int> zs, ones;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0')
        {
            z++;
            zs.push_back(i + 1);
        }
        else
        {
            ones.push_back(i + 1);
        }
    }
    if (z == n)
    {
        cout << 0 << endl;
        return;
    }
    if (z % 2 == 0 && (n - z) % 2 == 1)
    {
        cout << -1 << endl;
        return;
    }

    if (z % 2 == 1)
    {
        cout << z << endl;
        for (auto it : zs)
            cout << it << " ";
        cout << endl;
        return;
    }
    cout << n - z << endl;
    for (auto it : ones)
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
