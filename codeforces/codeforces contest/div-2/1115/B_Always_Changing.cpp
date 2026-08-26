#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    char last = a[0];
    int zr = 0, on = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == last)
        {
            if (a[i] == '0')
                zr++;
            else
                on++;
        }
        else
            last = a[i];
    }

    if (abs(zr - on) <= 1)
    {
        cout << zr + on << endl;
        return;
    }

    if (zr > on)
    {
                if (a[0] == '1')
            on++;
        if (abs(zr - on) <= 1)
        {
            cout << zr + on << endl;
            return;
        }
        if (a[n - 1] == '1')
            on++;

        if (abs(zr - on)<= 1)
        {
            cout << zr + on << endl;
            return;
        }
    }
    else
    {
        if (a[0] == '0')
            zr++;

        if (abs(zr - on) <= 1)
        {
            cout << zr + on << endl;
            return;
        }
        if (a[n - 1] == '0')
            zr++;

        if (abs(zr - on) <= 1)
        {
            cout << zr + on << endl;
            return;
        }

    }
    cout << -1 << endl;
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
