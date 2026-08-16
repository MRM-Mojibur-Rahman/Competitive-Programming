#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n % 2 != 0)
    {
        if (s[0] == 'b')
        {
            cout << "NO\n";
            return;
        }
        for (int i = 1; i < n; i += 2)
        {
            if (s[i] != '?' && s[i + 1] != '?' && s[i] == s[i + 1])
            {
                cout << "NO\n";

                return;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] != '?' && s[i + 1] != '?' && s[i] == s[i + 1])
            {
                cout << "NO\n";

                return;
            }
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
