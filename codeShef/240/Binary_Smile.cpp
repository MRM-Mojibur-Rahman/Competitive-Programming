#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int a1 = 0, b1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
            a1++;
        if (b[i] == '1')
            b1++;
    }
    if (a1 != b1)
    {
        cout << -1 << endl;
        return;
    }

    
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
