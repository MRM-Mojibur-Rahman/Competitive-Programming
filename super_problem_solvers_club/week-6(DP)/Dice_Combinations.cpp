#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
vector<ll>dp;
const ll mod = 1e9+7;
ll ans(int i)
{
    if(i==0) return 1;

    if(dp[i]!=-1) return dp[i];
    ll it = 0;
    for (int j = 1; j <= 6; j++)
    {
        it += (i-j>=0)? ans(i-j):0;
    }
    return dp[i]=it%mod;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    dp.resize(n+1,-1);
    cout<<ans(n)<<endl;
    
    

    return 0;
}
