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
        int n , k ;cin>>n>>k;
        string a ; cin>>a;
        int window = 0 , ans = INT_MAX,l=0;

        for (int r = 0; r < n; r++)
        {
            if(a[r]=='B') window++;
            if(r-l+1==k)
            {
                if(window>=k) ans = 0 ;
                else ans=min(ans,k-window);
                if(a[l]=='B') window--;
                l++;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
