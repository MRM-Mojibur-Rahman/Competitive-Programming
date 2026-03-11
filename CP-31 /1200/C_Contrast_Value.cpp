#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (a.empty() || a.back() != x)
            a.push_back(x);
    }
    int len = a.size();

    for (int i = 1; i < len - 1; i++)
    {
        if (abs(a[i - 1] - a[i]) + abs(a[i] - a[i + 1]) == abs(a[i - 1] - a[i + 1]))
            a[i] = a[i - 1];
    }
    vector<int> ans;
    for (int i = 0; i < len; i++)
    {
        if (ans.empty() || ans.back() != a[i])
            ans.push_back(a[i]);
    }
    cout << ans.size() << endl;
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
