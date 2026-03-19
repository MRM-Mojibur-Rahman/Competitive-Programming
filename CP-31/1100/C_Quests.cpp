#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1), b(n + 1), mxb(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        mxb[i] = max(b[i], mxb[i - 1]);
    }
    int sum = 0;
    int cnt = (k > n) ? k - n : 0;
    for (int i = 1; i <= k && i <= n; i++)
    {
        sum+=a[i];
    }
    for (int i = k; i >=0; i--)
    {
        if(i<=n)
    }
    
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
