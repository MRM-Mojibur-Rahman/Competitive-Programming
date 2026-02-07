#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &it : a)
        cin >> it;
    for (ll i = 0; i < n; i++)
    {
        map<ll, ll> prime_fact;
        for (ll j = 2; j * j <= a[i]; j++)
        {
            while (a[i] % j == 0)
            {
                prime_fact[j]++;
                a[i] /= j;
            }
        }
        if (a[i] > 1)
            prime_fact[a[i]]++;
        ll div = 1;
        for (auto [x, y] : prime_fact)
        {
            div *= (y + 1);
        }
        if (div == 3)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
