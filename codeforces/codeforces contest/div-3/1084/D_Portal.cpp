#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n);
    for (auto &v : a) cin >> v;

    int mnp = INT_MAX, pos = -1;

    // find minimum in [x, y)
    for (int i = x; i < y; i++)
    {
        if (a[i] < mnp)
        {
            mnp = a[i];
            pos = i;
        }
    }

    // print non segment <= mnp
    int i = 0;
    while (i < n)
    {
        if (i >= x && i < y)
        {
            i = y;
            continue;
        }
        if (a[i] > mnp) break;
        cout << a[i] << " ";
        i++;
    }

    // rotated [x, y)
    for (int j = pos; j < y; j++) cout << a[j] << " ";
    for (int j = x; j < pos; j++) cout << a[j] << " ";

    // remaining
    while (i < n)
    {
        if (i < x || i >= y)
            cout << a[i] << " ";
        i++;
    }

    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}