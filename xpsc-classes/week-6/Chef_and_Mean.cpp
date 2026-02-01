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
        int n ;
        cin>>n;
        vector<ll>v(n);
       ll sum = 0 ;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        double mean = (double)sum / n;
        ll ans = INT_MAX ;
        int idx = 0;
        for (int i = 0; i < n; i++)
        {
            if((double)(sum-v[i])==(double)mean * (n-1))
            {
               if(v[i]<ans)
               {
                    idx=i;
                    ans=v[i];
               }
            }
        }
        // cout<<mean<<endl;
        if(ans==INT_MAX) cout<<"Impossible"<<endl;
        else
        cout<<idx+1<<endl;
        
        
    }
    return 0;
}
