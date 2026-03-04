#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll b, c, d, a;
    cin >> b >> c >> d;
    a = b;
    for (int i = 0; i <= 62; i++)
    {
        ll bs = (b & (1LL << i)) ? 1 : 0;
        ll cs = (c & (1LL << i)) ? 1 : 0;
        ll ds = (d & (1LL << i)) ? 1 : 0;

        if (ds == 1 && bs == 1 && cs == 1)
            (a -= (1LL << i));
        if (ds == 1 && (bs == 0) && cs == 0)
            (a |= (1LL << i));
        else if ((ds == 1 && bs == 0 && cs == 1) || (ds == 0 && cs == 0 && bs == 1))
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << a << endl;
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
