#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<pair<int, int>> pos;
    int r = 1;
    while (r <= n)
    {
        if (a[r] < 0)
        {
            while (r <= n && a[r] < 0)
            {
                r++;
            }
            pos.push_back({r - 1, 0});
        }
        else if (a[r] > 0)
        {
            while (r <= n && a[r] > 0)
            {
                r++;
            }
            pos.push_back({r - 1, 1});
        }
    }
    int len = pos.size();
    vector<int> ans;
    int i = len-1;
    while (i >= 0 && pos[i].second == 0)
    {
        i--;
    }

    for (; i >= 0; i--)
    {
        ans.push_back(pos[i].first);
    }
    cout << ans.size() << endl;
    for (auto it : ans)
        cout << it << " ";
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
