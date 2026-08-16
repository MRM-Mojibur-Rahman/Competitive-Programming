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
    vector<bool> missing(n + 1, true);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        missing[a[i]] = false;
        mp[a[i]]++;
    }
    vector<int> total;
    for (int i = 0; i < n + 1; i++)
    {
        if (missing[i])
            total.push_back(i);
    }
    vector<int> ans(n + 1, 0);
    int sz =(int) total.size();
       

    for (int i = n; i >= 0; i--)
    {
        if (sz != 0 && i == total.back())
            total.pop_back(), sz--;
        ans[i] =max(mp[i],sz);
        

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
