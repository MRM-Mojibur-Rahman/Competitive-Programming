#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{

    ll n;
    cin >> n;
    ll a =1 ,b =1 ,c=1;
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            if(a==1) a=i;
            else if(b==1 ||b ==a) b*=i;
            else c*=i;

            n /= i;
        }
    }
    if (n > 1)
        c*=n;

    if(a!=1 && b!=1 && c!=1 && c!=a && c!=b && b!=a) 
    {
        cout<<"YES\n";
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else cout<<"NO\n";

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
