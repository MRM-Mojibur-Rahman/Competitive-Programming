#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int mxn = 1e5 + 5;
#define F first
#define S second
#define vin vetor<int>
#define vll vetor<ll>
#define vld vetor<long double>
ll dp[mxn][110];
ll ans(int idx, ll stamina, vector<pair<ll, int>> &a, int n)
{

    if (idx == n)
        return 0;

    if (dp[idx][stamina] != -1)
        return dp[idx][stamina];

    return dp[idx][stamina] = max(ans(idx + 1, stamina, a, n), ans(idx + 1, stamina*(100 - a[idx].S), a, n) + a[idx].F * stamina);
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n + 1; i++)
    {
        for (int j = 0; j <= 110; j++)
        {
            dp[i][j] = -1;
        }
    }

    vector<pair<ll, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].F >> a[i].S;
    }

    double an = (double)ans(0, 100, a, n) / 100;
    cout << fixed << setprecision(10) << an << endl;

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
