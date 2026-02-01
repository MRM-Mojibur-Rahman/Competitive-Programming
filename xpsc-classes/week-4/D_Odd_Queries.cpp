#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> v(n + 1), pre(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];

            pre[i] = v[i] + pre[i - 1];
        }
        
        for (int i = 0; i < q; i++)
        {
            int l, r, k;
            cin >> l >> r >> k;
            ll sum = (ll)pre[n] - pre[r] + pre[l - 1] + (ll)(r - l + 1) * k;

            if (sum % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
