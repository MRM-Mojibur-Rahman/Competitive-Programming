#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin>>n;
    map<int,int>mp;
    ll ans = 0 ;
    int j = 1 ;
    for (int i = 1; i <= n; i++)
    {
        int x;cin>>x;
        j = max(j,mp[x]+1);
        mp[x]=i;
        ans+=i-j+1;
        
    }
    cout<<ans<<endl;
    return 0;
}
