#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    auto check = [](ll a)
    {
        ll tem = a;
        while (tem)
        {
            int rem = tem % 10;
            if (rem != 0 && a % rem != 0)
                return false;
            tem /= 10;
        }
        return true;
    };

    ll limit = (n % 2520 == 0) ? n : ((n / 2520) + 1) * 2520;
    for (ll i = n; i <= limit; i++)
    {
        if (check(i))
        {
            cout << i << endl;
            return;
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
