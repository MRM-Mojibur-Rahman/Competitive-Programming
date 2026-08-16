#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;

    sort(a.begin(), a.end());
    vector<int> ans;
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i - 1]) > k)
        {
            ans.push_back(cnt);
            cnt = 1;
        }
        else
            cnt++;
    }
    ans.push_back(cnt);
    auto it = max_element(ans.begin(), ans.end());
    cout << n - *it << endl;
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
