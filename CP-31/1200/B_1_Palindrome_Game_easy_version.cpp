#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int winner = 2;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0')
            cnt++;
    }

    if (cnt % 2 == 0 or cnt == 1)
    {
        winner = 2;
    }
    else
    {
        winner = 1;
    }

    if (winner == 1)
        cout << "ALICE\n";
    else
        cout << "BOB\n";
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
