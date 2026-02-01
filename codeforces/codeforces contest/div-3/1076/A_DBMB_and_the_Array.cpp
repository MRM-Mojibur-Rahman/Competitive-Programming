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
        int n,x,s;cin>>n>>s>>x;
        vector<int>v(n);

        int sum = 0 ;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        if(sum<=s && (s-sum)%x==0) cout<<"YES\n";
        else cout<<"NO\n";

        
    }
    return 0;
}
