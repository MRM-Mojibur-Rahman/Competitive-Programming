#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int oddA = 0, oddB = 0, evenA = 0, evenB = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            oddA += a[i] - '0';
        else
            evenA += a[i] - '0';
        if (i % 2 == 0)
            oddB += b[i] - '0';
        else
            evenB += b[i] - '0';
    }

    if (oddA == oddB && evenA == evenB)
        cout << "YES\n";
    else
        cout << "NO\n";
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
