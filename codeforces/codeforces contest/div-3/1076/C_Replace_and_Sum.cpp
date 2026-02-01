#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            swap(a[i], b[i]);
        }
    }
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] > a[i - 1])
        {
            a[i - 1] = a[i];
        }
    }
    vector<ll> presum(n+1);
    presum[1] = a[0];
    for (int i = 2; i <= n; i++)
    {
        presum[i] = a[i-1] + presum[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << presum[r ] - presum[l - 1] << " ";
    }
    cout << endl;
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
