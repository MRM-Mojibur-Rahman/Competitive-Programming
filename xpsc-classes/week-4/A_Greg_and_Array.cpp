#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, q;
    cin >> n >> m >> q;
    vector<ll> v(n + 5), dif(n + 5, 0), que(m+5, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<vector<int>> op(m + 1, vector<int>(3));
    for (int i = 1; i <= m; i++)
        for (int j = 0; j < 3; j++)
            cin >> op[i][j];

    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        que[x] += 1;
        que[y + 1] -= 1;
    }
    for (int i = 1; i <= m; i++)
        que[i] += que[i - 1];

    for (int i = 1; i <= m; i++)
    {
        dif[op[i][0]] += op[i][2]*que[i];
        dif[(op[i][1]) + 1] -= op[i][2]*que[i];
    }
    for (int i = 1; i <= n; i++)
    {
        dif[i] += dif[i - 1];
    }

    for (int i = 1; i <= n; i++)
    {
        cout << v[i] + dif[i] << " ";
    }

    return 0;
}
