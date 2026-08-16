#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;

    int l = ceil((double)n / (x + y)), r = INT_MAX;

    if (n > z * x)
    {
        r = z + ceil((double)(n - z * x) / (x + 10 * y));
    }
    cout << min(l, r) << endl;
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
