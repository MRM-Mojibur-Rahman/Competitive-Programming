#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int len = 200000+5;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , k , q;cin>>n>>k>>q;
    vector<int>pre(len,0),dp(len,0);
    for (int i = 0; i < n; i++)
    {
        int l ,r ;
        cin>>l>>r;
        pre[l]+=1;
        pre[r+1]-=1;

    }
    for (int i = 1; i < len; i++)
    {
        pre[i]+=pre[i-1];
        if(pre[i]>=k) dp[i]+=dp[i-1]+1;
        else dp[i]=dp[i-1];
        
    }
    for (int i = 0; i < q; i++)
    {
        int l ,r ;
        cin>>l>>r;
        cout<<dp[r]-dp[l-1]<<endl;
    }
    
    
    return 0;
}
