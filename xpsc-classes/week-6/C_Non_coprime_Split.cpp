#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(ll n)
{
    if (n == 1)
        return true;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        if ((l - r == 0 && isPrime(r)) || r < 4)
        {
            cout << -1 << endl;
            continue;
        }
        if (r - l + 1 >= 2 || l % 2 == 0)
        {
            if(l<4 ) l = 4;
            while ( l % 2 != 0)
            {
                l++;

            }
            cout << l / 2 << " " << l / 2 << endl;
        }
        else
        {
            if (isPrime(l))
                cout << -1 << endl;
            else
            {

                for (int i = 2; i < r; i++)
                {
                    if ((r - i) % i == 0)
                    {
                        cout << i << " " << r - i << endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
