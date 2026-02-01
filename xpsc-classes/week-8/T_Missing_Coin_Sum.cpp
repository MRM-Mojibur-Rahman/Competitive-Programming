#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n ;cin>>n;
    vector<ll>v(n);
    ll reachable = 0 ;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        if(v[i]>reachable+1) break;
        reachable+=v[i];
    }
    cout<<reachable+1<<endl;
    
    
    return 0;
}
