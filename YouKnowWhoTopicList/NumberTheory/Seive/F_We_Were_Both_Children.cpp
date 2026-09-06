#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;cin>>n;
    
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        mp[x]++;
    }
    vector<int>ans(n+1,0);
    for (auto [x,y]:mp)
    {
        for (int j = x; j <= n; j+=x)
        {
            ans[j]+=y;
        }
        
    }
    int mx = 0;
    for(auto it:ans) mx = max(it,mx);
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
