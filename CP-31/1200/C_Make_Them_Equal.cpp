#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    char c;
    cin >> c;
    string a;
    cin >> a;
    bool is = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != c)
            is = false;
    }
    if (is)
    {
        cout << 0 << endl;
        return;
    }
    is = true;
    int x = 0;
    for (int i = n / 2; i <= n; i++)
    {
        if (a[i] == c)
        {
            is = false;
            x = i + 1;
        }
    }
    if (is)
    {
        cout << 2 << endl;
        cout << n - 1 << " " << n << endl;
    }
    else
    {
        cout << 1 << endl;
        cout << x << endl;
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
