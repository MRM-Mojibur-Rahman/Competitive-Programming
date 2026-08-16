#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1), tem;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    tem = a;
    sort(tem.begin() + 1, tem.end());
    vector<int> ans;
    auto mx = [&](int x)
    {
        if (x == tem[n])
            return tem[n - 1];
        else
            return tem[n];
    };
    for (int i = 1; i <= n; i++)
    {
        if (2 * mx(a[i]) == sum - a[i])
        {
            ans.push_back(i);
        }
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
   t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}
