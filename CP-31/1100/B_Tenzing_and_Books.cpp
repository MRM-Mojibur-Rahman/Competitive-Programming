#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n + 1), b(n + 1), c(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        cin >> b[i];

    for (int i = 1; i <= n; i++)
        cin >> c[i];
//helo
   
    auto ok = [&](int candidate)
    {
        
       return (candidate|x) == x;
    };
    int ans = 0;
    bool as = true, bs = true, cs = true;
    for (int i = 1; i <= n; i++)
    {
        if (as && ok(a[i]) && a[i]<=x)
        {
            ans |= a[i];
        }
        else
            as = false;
        if (bs && ok(b[i])&&b[i]<=x)
        {
            ans |= b[i];
        }
        else
            bs = false;
        if (cs && ok(c[i])&&c[i]<=x)
        {
            ans |= c[i];
        }
        else
            cs = false;
    }
   
    if(ans==x) cout<<"Yes\n";
    else cout<<"No\n";
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
