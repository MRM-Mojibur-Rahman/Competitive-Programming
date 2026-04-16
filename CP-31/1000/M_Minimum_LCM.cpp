#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
        cout << n / 2 << " " << n / 2 << endl;
    else
    {

        ll mnAns = 1;
        vector<ll> divisors;
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                divisors.push_back(i);
                divisors.push_back(n / i);
            }
        }
        sort(divisors.begin(), divisors.end());
        for (auto it : divisors)
            if (it % 2 == 1)
                mnAns = max(mnAns, it);
        cout << mnAns << " " << n - mnAns << endl;
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
