#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    int x = 3 * n;
    for (int i = n; i >= 1; i--)
    {
        cout << i << " " << x  << " " << x - 1 << " ";
        x-=2;
    }
    cout << endl;
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
