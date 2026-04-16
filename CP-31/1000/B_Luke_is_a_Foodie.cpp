#include <bits/stdc++.h>
using namespace std;
#define ll long long
int x;
ll lPart(int a)
{
    return min(abs(a + x), abs(a - x));
}
ll rPart(int a)
{
    return max(abs(a + x), abs(a - x));
}
void solve()
{
    ll n;
    cin >> n >> x;
    vector<ll> a(n);
    for (auto &it : a)
        cin >> it;
    ll l, r;
    l = lPart(a[0]), r = rPart(a[0]);
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        ll newL = lPart(a[i]), newR = rPart(a[i]);
        if (newL > r || newR < l)
        {
            ans++, l = newL, r = newR;
        }
        else
            l = max(newL, l), r = min(newR, r);
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
