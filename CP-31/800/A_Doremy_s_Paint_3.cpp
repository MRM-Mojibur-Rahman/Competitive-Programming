#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    for(auto &it:a) cin>>it;
    for (int i = 1; i < n-1; i++)
    {
        if(a[i-1]+a[i]!=a[i]+a[i+1])
        {
            cout<<"NO\n";return ;
        }
    }
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
