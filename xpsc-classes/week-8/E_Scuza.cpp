#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        ll n , q;cin>>n>>q;
        vector<ll>preSum(n),preMax(n),v(n);
        for (auto &i :v)
        {
            cin>>i;
        }
        for (int i = 0; i < n; i++)
        {
            if(i==0) {preSum[i]=v[i],preMax[i]=v[i];}
            else{
                preSum[i] = preSum[i-1]+v[i];
                preMax[i]=max(v[i],preMax[i-1]);
            }

        }
        // for(auto it:preSum) cout<<it<<" ";
        while (q--)
        {
            int x;
            cin>>x;
            if(v[0]> x) {cout<<0<<" ";continue;}
            cout<<preSum[upper_bound(preMax.begin(),preMax.end(),x)-preMax.begin()-1]<<" ";
            // cout<<upper_bound(preMax.begin(),preMax.end(),x)-preMax.begin()<<" ";
            
        }
        cout<<endl;
        
    }
    return 0;
}
