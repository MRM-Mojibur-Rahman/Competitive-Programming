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
        int n , x , k;
        cin>>n>>x>>k;
        x += 100*k;
        int r = 0;
        for (int i = 0; i < n; i++)
        {
            int m ;
            cin>>m;
            if(m>x) r++;
        }
        int ans;
        if(r < k||r==0)
         ans = 1;
        else ans = r-k+1;
        cout<<ans<<endl;
        
    }
    return 0;
}
