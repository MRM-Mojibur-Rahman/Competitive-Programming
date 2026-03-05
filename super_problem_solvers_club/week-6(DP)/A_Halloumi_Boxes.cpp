#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), tem;
    for (auto &it : a)
        cin >> it;
    tem = a;
    sort(tem.begin(), tem.end());
    if (tem == a)
    {
        cout << "YES\n";
        return;
    }
    if (k < 2)
    {
        cout << "NO\n";
    }
    else
        cout << "YES\n";
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
