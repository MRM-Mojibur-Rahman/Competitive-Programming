#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll p, q;
    cin >> p >> q;
    if (p >= q)
    {
        cout << "Alice\n";
        return;
    }

    if (p >= (2 * (q - p)) && q >= (3 * (q - p)))
        cout << "Bob\n";
    else
        cout << "Alice\n";
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
