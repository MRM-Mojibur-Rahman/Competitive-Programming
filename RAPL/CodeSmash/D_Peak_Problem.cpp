#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;

    if (n < 2 * k + 1)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> ans;

    int mx = n - k + 1, x = 1;
    for (int i = 0; i < k; i++)
    {
        ans.push_back(x);
        ans.push_back(mx);
        x++;
        mx++;
    }
    for (int i = x; i < n - k + 1; i++)
    {
        ans.push_back(i);
        
    }

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
