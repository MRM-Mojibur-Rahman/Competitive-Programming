#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int a, b;
    cin >> a >> b;
    int x = a & b;
    cout << (a ^ x) + (b ^ x )<< endl;
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
