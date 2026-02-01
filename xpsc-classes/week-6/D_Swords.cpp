#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd_ll(ll a, ll b)
{
    while (b != 0)
    {
        ll t = a % b;
        a = b;
        b = t;
    }
    return a;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> v(n),flip(n);
    ll mx = INT_MIN;
    ll sum = 0;
    ll gcd = 0;
    ll mn_dif = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mx = max(mx, v[i]);
        sum += v[i];
        
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; i++)
    {
        flip[i]=v[0]-v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(flip[i]!=0)
        gcd=gcd_ll(gcd,flip[i]);
    }
    
    
    
    

    ll lost = mx * n - sum;
    // // if(gcd==1) cout<<1<<" "<<mn_dif<<endl;
    // // else
    cout << lost / gcd << " " << gcd << endl;

    return 0;
}
