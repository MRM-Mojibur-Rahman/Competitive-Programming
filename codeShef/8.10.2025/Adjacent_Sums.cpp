#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<ll>ar(n),dp(n);
        for (int i = 0; i < n; i++)
        {
           cin>>ar[i];
        }
        dp[0]=ar[0];
        for (int i = 1; i < n; i++)
        {
            ll cost1 = ar[i]+dp[i-1];
            ll cost2 = abs(ar[i]-ar[i-1]);
            if(i-2>=0) cost2 +=ar[i-2];
            if(i-3>=0) cost2+=dp[i-3];
            dp[i] = min(cost1,cost2);

        }
        cout<<dp[n-1]<<endl;
        
        
    }
    return 0;
}
