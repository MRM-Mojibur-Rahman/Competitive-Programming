#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<bool> is(101, false);
    for (auto &it : v)
        cin >> it;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
            ans++, is[v[i]] = true;
        else if (is[v[i] - 1])
            ans++, is[v[i]] = true;
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
