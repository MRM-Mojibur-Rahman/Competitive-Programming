#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    map<int,int>mp;
    for (int i = 1; i <= n; i++)
    {
       cin>>a[i];
       mp[a[i]]=i;
    }
    int ans =0 ;
    for (int i = n; i >0; i--)
    {
        int is = 1;
        while (a[i]*is<=(2*n-1))
        {
            if(a[i]*is==(i+mp[is]) && mp[is]<i &&mp[is]!=0) ans++;
            is++;
        }
        
    }
    cout<<ans<<endl;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
