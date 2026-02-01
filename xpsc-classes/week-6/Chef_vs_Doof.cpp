#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll LCM(ll a , ll b)
{
    return (a/__gcd(a,b))*b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        ll lcm = v[0];
        for (int i = 1; i < n; i++)
        {
            lcm=LCM(lcm,v[i]);
        }
        if(lcm%2==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

        
    }
    return 0;
}
