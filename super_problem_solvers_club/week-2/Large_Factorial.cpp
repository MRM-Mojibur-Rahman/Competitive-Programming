#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1000000007;
void solve()
{
    ll n;
    cin >> n;
    ll fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = ((fact % mod )* (i % mod)) % mod;
    }
    cout<<fact<<endl;
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
