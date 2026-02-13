#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 1e7 + 5;
vector<int> primes;
int len = 0;
vector<bool> nums(maxn, true);
void sieve()
{
    for (int i = 2; i * i < maxn; i++)
    {
        if (nums[i])
            for (int j = 2 * i; j < maxn; j += i)
            {
                nums[j] = false;
            }
    }
    for (int i = 2; i < maxn; i++)
        if (nums[i])
            primes.push_back(i);
    len = primes.size();
}
void solve()
{
    int n;
    cin >> n;
    vector<int> prime;
    for (int i = 0; i < len; i++)
    {
        if (primes[i] > n)
            break;
        prime.push_back(primes[i]);
    }

    ll ans = (ll)prime.size();
    for (int i = 2; i <= n; i++)
    {
        int idx = 0;

        while (prime[idx] * i <= n)
        {
           
            ans++;
            idx++;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
