#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mx = 2e5;
vector<bool> primes(mx, true);
vector<ll> allpirmes;
void sieve()
{
    for (int i = 2; i < mx; i++)
    {
        if (primes[i])
        {
            for (int j = 2 * i; j < mx; j += i)
                primes[j] = false;
            allpirmes.push_back(i);
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout <<  allpirmes[i] * allpirmes[i - 1] << " ";
    }

    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    sieve();
    while (t--)
    {
        solve();
    }
    return 0;
}