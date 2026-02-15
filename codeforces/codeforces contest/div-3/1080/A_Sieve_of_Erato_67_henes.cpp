#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    for(int &it:a) cin>>it;

    sort(a.begin(),a.end());
    if(a[n-1]==67) cout<<"YES\n";
    else cout<<"NO\n"; 
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
