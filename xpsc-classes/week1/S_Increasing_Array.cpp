#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    vector<ll>num(n);
    for (int i = 0; i < n; i++)
    {
        cin>>num[i];
    }
    ll ans =0 ;
    for (int i = 1; i < n; i++)
    {
        if(num[i]<num[i-1])
        {
            ans+=num[i-1]-num[i];
            num[i]=num[i-1];
           
        }
        
    }
    cout<<ans<<endl;
    
    return 0;
}
