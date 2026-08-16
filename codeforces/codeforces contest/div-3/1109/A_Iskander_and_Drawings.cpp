#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int mx = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '#')
            cnt++;
        else
        {
            mx = max(cnt, mx);
            cnt = 0;
        }
    }
     mx = max(cnt, mx);

    cout <<( mx+1) / 2 << endl;
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
