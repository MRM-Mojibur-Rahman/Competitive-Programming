#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    for(auto &it:a) cin>>it;
    int mn = INT_MAX;
    for (int i = 1; i < n; i++)
    {
       if(a[i]<a[i-1]) mn = 0;
        mn = min((a[i]-a[i-1])/2+1,mn);
       
    }
    cout<<mn<<endl;
    
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
