#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    sort(a.begin(), a.end());
    map<int, int> mp;
    for (auto it : a)
    {
        mp[it]++;
    }
    int mx = 0;

    for (int i = 1; i <= m; i++)
    {
        int sum = 0;
        int l=0;
        auto it = lower_bound(a.begin(), a.end(), i);
        if (it != a.end())
            l = it - a.begin() ;

        sum += n - l + mp[2*i];

        mx= max(mx,sum);
    }
    cout<<mx<<endl;
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
