#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int>a(n+1);
    for (int i = 1; i <=n; i++)
    {
        cin>>a[i];
    }
    if(a[1]!=1) cout<<"NO\n";
    else 
    cout<<"YES\n";
    
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
