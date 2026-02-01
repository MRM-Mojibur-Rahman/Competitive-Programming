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
        int n ;cin>>n;
        vector<int>v(n+4,0);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int sum = 0 ;
        vector<int>ans(n,0);
        for (int i = 1; i < n; i++)
        {
            sum+=abs(v[i]-v[i-1]);
        }
        ans[0]=sum-abs(v[1]-v[0]);
        ans[n-1] = sum-abs(v[n-1]-v[n-2]);
        for (int i = 1; i < n-1; i++)
        {
            ans[i]+=sum + abs(v[i-1]-v[i+1])-abs(v[i]-v[i-1])-abs(v[i]-v[i+1]);
        }
        sort(ans.begin(),ans.end());
        // cout<<sum<<" ";
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<ans[i]<<" ";
        // }
        // cout<<endl;
        cout<<ans[0]<<endl;
        
        

        

        
    }
    return 0;
}
