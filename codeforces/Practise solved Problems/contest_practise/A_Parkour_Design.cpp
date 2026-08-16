#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll x, y;
    cin >> x >> y;
    if (y < 0)
    {
        x -= -(y * 4);
    }

    else
    {
        x -= (y * 2);
    }
    // cout<<x<<endl;
    if (x < 0 || x % 3 != 0)
    {
        cout << "NO\n";
        return;
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
