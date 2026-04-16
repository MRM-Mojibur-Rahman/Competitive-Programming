#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;cin>>n;
    string a;cin>>a;

    vector<int>l(n),r(n);
    set<char>ls,rs;
    for (int i = 0; i < n; i++)
    {
        ls.insert(a[i]);
        l[i]=ls.size();
    }
    for (int i = n-1; i >=0; i--)
    {
        rs.insert(a[i]);
        r[i]=rs.size();
    }
    int ans = 0 ;
    for (int i = 0; i < n-1; i++)
    {
        ans = max(ans,l[i]+r[i+1]);
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
