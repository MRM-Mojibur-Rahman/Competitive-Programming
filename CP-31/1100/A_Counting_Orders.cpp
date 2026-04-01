#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    sort(a.begin(), a.end());
    vector<int> b(n);
    for (auto &it : b)
        cin >> it;
    sort(b.begin(), b.end());
    ll ans = 1;

    for (int i = n - 1,ix = 0; i >= 0; i--,ix++)
    {
        auto it = upper_bound(a.begin(), a.end(), b[i]);
        if(it==a.end()) {cout<<0<<endl;return;}

        int x = n - (it-a.begin())-ix;

        

        ans = (ans * (x)) % mod;
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
