#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    set<char> s;
    int ans = 0, len = 0;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
        if (len < s.size())
        {
            ans += (n - i);
            len = s.size();
        }
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
