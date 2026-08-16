#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    double l;cin>>l;
    double pi =3.142857;
    double ex = l*l-(pi*l*l/4);
    double ans = (pi*l*l/4)/2 + ex/2;
    cout<<fixed<<setprecision(6)<<ans<<endl;
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
