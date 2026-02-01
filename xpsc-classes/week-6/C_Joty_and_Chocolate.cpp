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

    ll n , a ,b , p , q;
    cin>>n>>a>>b>>p>>q;
    ll divA = n/a,divB= n/b;
    ll totalLcm = n/LCM(a,b);
    {
        ll ans = (divB-totalLcm)*q+(divA-totalLcm)*p;
        ans+=max(p,q)*totalLcm;
        cout<<ans<<endl;
    }
    
    return 0;
}
