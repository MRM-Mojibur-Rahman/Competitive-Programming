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
    int mid = n / 2;
    int cnt = 0;
    int l = 0, r = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[mid])
            cnt++;
        else
        {
            if (i < mid)
                l++;
            else
                r++;
        }
    }

    int ans = min(l, r) + max(l, r) - min(l, r);
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
