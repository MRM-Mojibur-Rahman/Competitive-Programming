#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] == '?' && a[n - i - 1] == '?')
        {
            cout << "NO\n";
            return;
        }
    }
    if (n % 2 && a[n / 2] == '?')
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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
