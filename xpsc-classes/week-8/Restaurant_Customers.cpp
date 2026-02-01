#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        int x,y;cin>>x>>y;
        mp[x]++;
        mp[y]--;
    }
    int cur=0,ans=-1;
    for (auto it:mp)
    {
        cur+=it.second;
        ans=max(cur,ans);

    }
    cout<<ans<<endl;
    
    

    return 0;
}
