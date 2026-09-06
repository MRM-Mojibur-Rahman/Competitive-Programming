#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll x)
{
    cout << "Case " << x << ":\n";
    ll n;
    cin >> n;

    map<ll,ll>mp;
    for (ll i = 2; i*i<=n; i++)
    {
        while (n%i==0)
        {
            mp[i]++;
            n/=i;
        }
        
    }
    if(n>1) mp[n]++;
    vector<ll>ans={1};
   
    for(auto [x,y]:mp)
    {
        vector<ll>tem;
        ll mal = x;
        for (ll i = 0; i < y; i++)
        {
            vector<ll>tem1;
            for(auto it:ans) tem1.push_back(it*mal);
            mal*=x;
            if(i%2==0)
            reverse(tem1.begin(),tem1.end());
            tem.insert(tem.end(),tem1.begin(),tem1.end());
            
        }
        
        ans.insert(ans.end(),tem.begin(),tem.end());
    }
    for(auto it:ans) cout<<it<<" ";
    cout<<endl;

    


    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    ll cnt = 1;
    while (t--)
    {
        solve(cnt++);
    }
    return 0;
}
