#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int len = n * (n - 1) / 2;
    vector<int> a(len);
    map<int, int> mp;
    for (int i = 0; i < len; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    vector<int> ans;

    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {

        while (it->second)
        {
            it->second -= ans.size();
            ans.push_back(it->first);
        }
    }
    for (auto it : ans)
        cout << it << " ";
    cout << '\n';
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