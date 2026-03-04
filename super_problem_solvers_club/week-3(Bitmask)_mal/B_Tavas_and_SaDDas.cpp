#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;cin>>n;
    ll digits = (n == 0 ? 1 : floor(log10(n)) + 1);
    ll pre = (1LL<<digits) -2 ;
    ll ans = 0 ;
    for (int i = 0; i < digits; i++)
    {
        int rem = n %10;
        if(rem==7) ans|=(1LL<<i);
        n/=10;
        
    }
    cout<<pre+ans+1<<endl;
    


    return 0;
}
