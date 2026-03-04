#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), pmx(n);
    ll mx = 0 ;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx= max(mx,a[i]);
        pmx[i]=mx;
    }
    ll sum = 0 ;
    for (int i = n-1; i >=0; i--)
    {
        cout<<sum+pmx[i]<<" ";
        sum+=a[i];
    }
    cout<<endl;
    
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
