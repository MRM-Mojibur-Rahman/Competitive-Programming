#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , k ;cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];

    }
    ll r =0 ,l = 0 , ans = 0 ;
    map<int,int>mp;
    while (r<n)
    {
        mp[v[r]]++;
        while (mp.size()>k)
        {
            mp[v[l]]--;
            if(mp[v[l]]==0) mp.erase(v[l]);
            l++;
        }
        ans+=r-l+1;
        r++;
    }
    cout<<ans<<endl;
    return 0;
}
