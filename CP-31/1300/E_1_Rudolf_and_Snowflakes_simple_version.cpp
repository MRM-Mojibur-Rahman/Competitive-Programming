#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mxn = 1e6 + 5;
vector<vector<int>> sums(mxn);
void solve()
{
    int n;
    cin >> n;
    set<int> divisors;
    for (int i = 2; i * i <= (n - 1); i++)
    {
        if ((n - 1) % i == 0)
            divisors.insert(i), divisors.insert((n - 1) / i);
    }

    auto ok = [&](int x)
    {
        auto it = lower_bound(sums[x].begin(), sums[x].end(), n-1);
        if(it==sums[x].end()) return false;
        if(*it==n-1) return true;
        else false;
        
    };

    for (auto it : divisors)
    {
        if (ok(it))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (ll i = 2; i < mxn; i++)
    {
        ll tem = i;
        ll res = i;
        while (res <= mxn)
        {
            sums[i].push_back(res);

            tem *= i;
            res += tem;
        }
    }

    while (t--)
    {
        solve();
    }
    return 0;
}
