#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string a;
    cin >> a;

    for (int i = 0; i < n - k; i++)
    {
        if (a[i] == '1')
        {

            a[i] = '0';
            if (a[i + k] == '1')
                a[i + k] = '0';
            else
                a[i + k] = '1';
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            cout << "NO\n";
            return;
        }
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
