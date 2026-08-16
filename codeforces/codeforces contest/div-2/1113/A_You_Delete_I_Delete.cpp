#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{

    string a;
    cin >> a;
    int n = a.size();
    bool is = false;
    int x = -1, y = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0')
        {
            x = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            y = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i != x && i != y)
        {
            cout << a[i];
        }
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
