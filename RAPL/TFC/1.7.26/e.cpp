#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, c;
    cin >> n >> c;

    map<ll, ll> mp;

    for (ll i = 2; i  <= n; i++)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }
    if(n!=1)
    mp[n]++;

    bool is = true;
    ll ans = 0;

    for (auto [x, y] : mp)
    {
        
        if (x > c)
        {
            is = false;
            break;
        }

        ans += y;
    }

    if (!is)
    {
        cout << "Que es Obo?\n";
    }
    else
        cout << ans << endl;

    return 0;
}
