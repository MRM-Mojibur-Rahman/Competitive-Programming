#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    long long b, c, d;
    cin >> b >> c >> d;      // available B, S, C

    long long pb, pc, pd;
    cin >> pb >> pc >> pd;   // prices

    long long money;
    cin >> money;

    // count required ingredients per burger
    long long nb = 0, nc = 0, nd = 0;
    for (char x : s)
    {
        if (x == 'B') nb++;
        else if (x == 'S') nc++;
        else if (x == 'C') nd++;
    }

    auto can = [&](long long x)
    {
        long long needB = max(0LL, x * nb - b);
        long long needS = max(0LL, x * nc - c);
        long long needC = max(0LL, x * nd - d);

        long long cost =
            needB * pb +
            needS * pc +
            needC * pd;

        return cost <= money;
    };

    long long l = 0, r = 1e13, ans = 0;
    while (l <= r)
    {
        long long mid = (l + r) / 2;
        if (can(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << '\n';
    return 0;
}
