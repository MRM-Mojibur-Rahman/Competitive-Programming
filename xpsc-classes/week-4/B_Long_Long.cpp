#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int n ; cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int i = 0 , j = 0,ans=0 ;
        while (i<n)
        {
            if(v[i]<0) 
            {
                while (v[i]<1 && i<n)
                {
                    v[i]=abs(v[i]);
                    i++;
                    
                }
                
                ans++;
            }
            i++;
        }
        long long  sum = 0 ;
        for (int i = 0; i < n; i++)
        {
            sum+=v[i];
        }
        
        cout<<sum<<" "<<ans<<endl;
        
    }
    return 0;
}
