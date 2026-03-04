#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll p , q;cin>>p>>q;
    if((p%q)%2==0 && p!=q) cout<<"Bob\n";
    else cout<<"Alice\n";
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
