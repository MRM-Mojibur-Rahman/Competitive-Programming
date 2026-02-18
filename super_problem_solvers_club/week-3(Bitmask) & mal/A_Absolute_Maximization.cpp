#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    int mx = a[0];
    int mn = a[0];
    for (int i = 1; i < n; i++)
    {
        mx |= a[i];
        mn &= a[i];
    }
    cout << mx - mn << endl;
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
