#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll x)
{
    if(x==1 ) return false;
    for (int i = 2; i*i<= x; i++)
    {
        if(x%i==0) return false;
    }
    return true;
    
}
bool isSqrt(ll x)
{
    ll y = sqrtl(x);
    return x==y*y;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        ll x;cin>>x;
        if(isSqrt(x)&&isPrime(sqrtl(x)))
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    
    return 0;
}
