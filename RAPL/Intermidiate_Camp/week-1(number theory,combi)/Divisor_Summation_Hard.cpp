#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> primes;
const int mxn = 1e8;
void solve()
{
    ll n;
    cin >> n;
    ll tem = n;
    ll ans = 1;
    for (auto it : primes)
    {
        if (it > n)
        {
            break;
        }
        ll cnt = 0, p = it;
        while (n % it == 0)
        {
            n /= it;
            cnt++;
            p *= it;
        }
        if (cnt != 0)
          ans = ans * (p - 1) / (it - 1);
    }

    if (n > 1)
    {
        ans= ans* (n + 1) ;
    }
    cout << ans - tem << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    vector<int> vist(mxn, 0);
    
    for (int i = 2; i * i <= mxn; i++)
    {
        if (!vist[i])
        {
             primes.push_back(i);
            for (int j = i * i; j <= mxn; j += i)
                vist[j] = 1;
        }
    }

    while (t--)
    {
        solve();
    }
    return 0;
}
