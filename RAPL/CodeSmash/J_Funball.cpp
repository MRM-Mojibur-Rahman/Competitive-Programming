#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    a += c;
    b += d;
    if (a < b)
    {
        cout << "Vinland\n";
    }
    else if (b < a)
        cout << "Eldia\n";
    else
        cout << "Bangladesh\n";
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
