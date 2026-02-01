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
        int n;cin>>n;
        vector<int>v(n);
        int temp = 0 ;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            temp^=v[i];
        }
        int ans = temp ;
        for (int i = 0; i < n; i++)
        {
            ans=min((temp^v[i]),ans);
        }
        cout<<ans<<endl;
        
        
    }
    return 0;
}
