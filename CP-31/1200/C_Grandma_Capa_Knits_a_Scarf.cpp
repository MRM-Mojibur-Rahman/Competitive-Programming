#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int ans = INT_MAX;
    for (char i = 'a'; i <= 'z'; i++)
    {
        bool is = true;

        int cnt = 0;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            if (a[l] == a[r])
                l++, r--;
            else if (a[l] != a[r])
            {
                if (a[l] == i)
                    l++, cnt++;
                else if (a[r] == i)
                    r--, cnt++;
                else
                {
                    is = false;
                    break;
                }
            }
        }
        if (is)
            ans = min(ans, cnt);
    }
    if (ans != INT_MAX)
        cout << ans << endl;
    else
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
