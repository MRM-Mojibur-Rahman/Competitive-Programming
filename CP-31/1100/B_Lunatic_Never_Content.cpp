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
    set<int> s;
    for (int i = 0; i < n / 2; i++)
    {
        if (abs(a[i] - a[n - 1 - i]) != 0)
        {
            s.insert(abs(a[i] - a[n - 1 - i]));
        }
    }
    int ans = 0;
    for (auto it : s)
    {
        ans = __gcd(ans, it);
    }
    cout << ans << endl;
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
