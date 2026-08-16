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
    int ans = 0, sum = 0;
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    ans+=mp[0];
    ans+=min(mp[1],mp[2]);
    sum = min(mp[1],mp[2]);
    mp[1]-=sum;
    mp[2]-=sum;
    
    ans+=(mp[2]*2)/6;


    ans+= mp[1]/3;
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
