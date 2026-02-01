#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    while (cin >> x && x != 0)
    {
        ll ans = (ll)x * (x + 1) * (2 * x + 1) / 6;
        cout << ans << endl;
    }

    return 0;
}
