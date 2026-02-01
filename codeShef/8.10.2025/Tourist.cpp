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
        int n, si, sj;
        cin>>n>>si>>sj;
        int ans = INT_MAX ;
        for (int i = 0; i < n; i++)
        {
            int x,y;
            cin>>x>>y;
            ans = min(ans,abs(si-x)+abs(sj-y));

        }
        cout<<ans<<endl;
        
    }
    return 0;
}
