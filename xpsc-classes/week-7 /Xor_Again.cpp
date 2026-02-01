#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        ll ans = 0 ;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            ans^=x;
        }
        cout<<ans*2<<endl;
    }
    return 0;
}
