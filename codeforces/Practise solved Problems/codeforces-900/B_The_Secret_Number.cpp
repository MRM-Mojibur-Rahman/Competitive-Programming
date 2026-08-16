#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;cin>>n;
    while (n)
    {
        cout<<n%10<<" ";
        n/=10;

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
