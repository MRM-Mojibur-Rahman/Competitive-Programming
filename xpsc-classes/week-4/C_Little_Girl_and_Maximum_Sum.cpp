#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> v(n), pre(n + 1, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        pre[--x] += 1;
        pre[y] -= 1;
    }

    sort(v.rbegin(), v.rend());
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i] + pre[i - 1];
    }
    sort(pre.rbegin(), pre.rend());

    long long ans = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        ans += 1LL * v[i] * pre[j++];
    }
    cout << ans << endl;

    return 0;
}
