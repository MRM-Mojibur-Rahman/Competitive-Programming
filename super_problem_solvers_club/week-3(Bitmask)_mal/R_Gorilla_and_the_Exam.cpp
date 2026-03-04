#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    if (mp.size() == 1)
    {
        cout << 1 << endl;
        return;
    }
    int ans = mp.size();
    vector<int> fre;
    for (auto [x, y] : mp)
    {
        fre.push_back(y);
    }
    sort(fre.begin(), fre.end());
    n = fre.size();
    for (int i = 0; i < n; i++)
    {
        if(fre[i]<=k)
        {
            ans--;
            k-=fre[i];
        }
    }
    
    cout << max(1,ans) << endl;
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
