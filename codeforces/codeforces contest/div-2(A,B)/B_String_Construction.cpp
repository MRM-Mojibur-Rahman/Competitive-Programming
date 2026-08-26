#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;

    string ans;
    if (n - m < 2)
    {
        cout << -1 << endl;
        return;
    }
    int onCnt = (m + 1) / 2, zrCnt = m / 2;

    // cout<<onCnt<<" "<<zrCnt<<endl;

    for (int i = 0; i <= onCnt; i++)
    {
        ans += '1';
    }
    for (int i = 0; i <= zrCnt; i++)
    {
        ans += '0';
    }

    int len = ans.size();

    if (onCnt > zrCnt && len < n)
        ans.insert(ans.begin(), '0'), len++;

    for (int i = len; i < n; i++)
    {
        if (ans.back() == '1')
            ans += '0';
        else
            ans += '1';
    }
    cout << ans << endl;
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
