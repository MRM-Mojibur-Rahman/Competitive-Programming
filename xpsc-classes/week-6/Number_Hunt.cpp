#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n)
{
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

ll nextPrime(ll n)
{
    while (!isPrime(n)) n++;
    return n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;

        if (x == 1)
        {
            cout << 6 << '\n';
            continue;
        }

        ll p = nextPrime(x);
        ll q = nextPrime(p + 1);

        cout << p * q << '\n';
    }
    return 0;
}
