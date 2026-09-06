// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// ll nth(ll n)
// {

//     return ((sqrt(8 * n + 1) - 1) / 2);
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll n;
//     cin >> n;
//     map<ll, ll> mp;
//     for (ll i = 2; 1LL * i * i <= n; i++)
//     {
//         while (n % i == 0)
//         {

//             mp[i]++;
//             n /= i;
//         }
//     }
//     if (n > 1)
//         mp[n]++;

//     ll ans = 0;
//     for (auto [x, y] : mp)
//     {
//         ans += nth(y);
//     }
//     cout << ans << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

const int N = 1000000;

int spf[N + 1];
int d[N + 1];

int main()
{
    int t;
    scanf("%d", &t);

    // Build SPF
    for (int i = 2; i <= N; i++)
    {
        if (spf[i] == 0)
        {
            spf[i] = i;

            if (1LL * i * i <= N)
            {
                for (int j = i * i; j <= N; j += i)
                {
                    if (spf[j] == 0)
                        spf[j] = i;
                }
            }
        }
    }

    // Number of divisors
    d[1] = 1;

    for (int i = 2; i <= N; i++)
    {
        int p = spf[i];
        int x = i;
        int cnt = 0;

        while (x % p == 0)
        {
            x /= p;
            cnt++;
        }

        d[i] = d[x] * (cnt + 1);
    }

    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int g = __gcd(a, b);

        printf("%d\n", d[g]);
    }

    return 0;
}