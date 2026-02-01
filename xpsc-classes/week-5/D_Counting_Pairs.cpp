#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// s.find_by_order(position); value
//s.order_of_key(25);  elements < 25
// less_equal for multiset
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        ll n , lower , upper;
        cin>>n>>lower>>upper;
        vector<ll>v(n);
        pbds<pair<ll,int>>pb;
        ll sum = 0 ;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            sum+=(ll)v[i];
            pb.insert({v[i],i});
        }
        ll ans = 0 ;
        while(!pb.empty())
        {
            auto it = pb.begin();
            ll x = it->first;
            pb.erase(it);
            ans+=(ll) pb.order_of_key({sum-lower-x+1,-1})-pb.order_of_key({sum-upper-x,-1});
        }
        cout<<ans<<endl;

        
    }
    return 0;
}
