#include <bits/stdc++.h>
using namespace std;
#define ll long long
int xor1ToN(int n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    return 0;
}
void solve()
{
    int a, b;
    cin >> a >> b;
    int xr = xor1ToN(a - 1);
    if (xr == b)
        cout << a << endl;
    else if ((xr ^ b) != a)
        cout << a + 1 << endl;
    else
        cout << a + 2 << endl;
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
