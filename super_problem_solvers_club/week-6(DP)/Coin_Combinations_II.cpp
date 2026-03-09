#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7, mxn = 1e6 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;cin>>n>>x;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    sort(a.begin(),a.end());

   vector<vector<ll>>dp(n,vector<ll>(x+1));
   for (int i = 0; i < n; i++)
   {
    dp[i][0]=1;
   }
   for (int i = n-1; i >=0; i--)
   {
    for (int sum= 0; sum<=x; sum++)
    {
        /* code */
    }
    
   }
   
   

   
   cout<<dp[x]<<endl;
   
    
    
    return 0;
}
