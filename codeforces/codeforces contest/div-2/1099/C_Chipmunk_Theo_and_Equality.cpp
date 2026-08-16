#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    sort(a.begin(), a.end());

    vector<map<int, int>> series(n);
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;

        int tem = a[i];

        if (tem == 1)
        {
            series[i][1] = 0;
            series[i][2] = 1;
            continue;
        }
        while (tem != 1)
        {
            series[i][tem] = cnt;
            if (tem % 2 == 0)
                tem /= 2;
            else
                tem++;
            cnt++;
        }
        series[i][tem] = cnt;
    }

    int ans = INT_MAX;
    for (auto [x, y] : series[0])
    {
        int tem = 0;
        bool is = true;
        for (int i = 0; i < n; i++)
        {

            if (series[i].find(x) != series[i].end())
                tem += series[i][x];
            else
            {
                is = false;
                break;
            }
        }
        if (is)
            ans = min(ans, tem);
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
