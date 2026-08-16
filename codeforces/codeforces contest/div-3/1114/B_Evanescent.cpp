#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    bool is = false, si = false;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i - 1] == a[i + 1] && a[i] != a[i - 1])
        {
            is = true;
        }

        if (a[i] != a[i - 1] && a[i] != a[i + 1])
            si = true;
    }

    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
            cnt++;
    }
    cnt++;
    if (is)
        cnt -= 2;
    else if (si)
        cnt--;
    cout << cnt << endl;
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
