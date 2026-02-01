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
        int n , x ,y;
        cin>>n>>x>>y;
        int ans = 2*n-2 ;
        // up 
        ans+=min(x,y)-1;
        //down
        ans+= n - max(x,y) ;
        // /^
        ans+=min(x-1,n-y);
        ans+=min(n-x,y-1);

        cout<<ans<<endl;

        
    }
    return 0;
}
