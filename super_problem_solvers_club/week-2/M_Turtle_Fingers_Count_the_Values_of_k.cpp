#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<int,int> pf(int n)
{
    map<int,int>npf;
    for (int i = 2; i*i <= n; i++)
    {
        while (n%i==0)
        {
            npf[i]++;
            n/=i;
        }
        
    }
    if(n>1) npf[n]++;
    return npf;
    
}
void solve()
{
   
    ll a, b, l;cin>>a>>b>>l;
    map<int,int>apf = pf(a),bpf=pf(b),lpf=pf(l);
    int powa= 0,powb = 0,k=0;
    for (auto [x,y]:apf)
    {
        for(auto [p,q]:lpf)
    }
    



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
