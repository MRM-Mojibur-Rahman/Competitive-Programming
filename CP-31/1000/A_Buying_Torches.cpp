#include <bits/stdc++.h>
using namespace std;
#define ll long long


// this is the main part of the problem this problem is easy but the catch is when we 
// try divison with large values then the ceil div we get it can be wrong so we have to use this 
// ceil div technique but i could not implement this , that my badluck i give up too early
//😭



ll ceil_div(ll lob ,ll hor)
{
    return (lob+hor-1)/hor;
}

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;
    ll ans = ceil_div((k+k*y-1),(x-1)) + k;
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
