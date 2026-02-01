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
        int n;cin>>n;
        vector<int>v(n);
        int z = 0 ;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]==0) z++;
        }
        if(z%2==0) cout<<"YES\n";
        else
        cout<<"NO\n";
        
        
    }
    return 0;
}
