#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    if (n % 12 != 10)
    {
        cout << n % 12 << " " << n - n % 12 << endl;
    }
    else
    {
        if (n == 10)
            cout << -1 << endl;
        else
        {
            cout << 22 << " " << n - 22 << endl;
        }
    }
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
