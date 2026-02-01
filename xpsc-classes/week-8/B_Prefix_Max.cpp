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
        ll n;cin>>n;
        ll mx = -1;
        for (int i = 0; i < n; i++)
        {
            ll x;cin>>x;
            mx=max(mx,x);
        }
        cout<<mx*n<<endl;
        
    }
    return 0;
}
