#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> ans;

    ans.push_back(abs(a - b));
    ans.push_back(abs(b - c));
    ans.push_back(abs(c - a));

    sort(ans.begin(), ans.end());
    cout << ans[0] << endl;
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
