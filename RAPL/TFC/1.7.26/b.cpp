#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, g;
    cin >> n >> g;

    int ans = g*2;
    ans+= n-g;
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
