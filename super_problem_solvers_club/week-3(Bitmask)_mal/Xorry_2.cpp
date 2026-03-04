#include <bits/stdc++.h>
using namespace std;
#define ll long long
int msb_pos(long long x)
{
    return 31 - __builtin_clz(x);
}
void solve()
{
    int n;
    cin >> n;

    // if (__builtin_popcount(n) < 2)
    // {
    //     cout << 1 << endl;
    //     return;
    // }
    int a = (1 << msb_pos(n));
    n ^= a;
    ll cnt = 0;
    for (int i = msb_pos(n) - 1; i >= 0; i--)
    {

        if ((n & (1 << i)) == 0)
            cnt++;
    }
    cout << (1LL << cnt) << endl;
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
