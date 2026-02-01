#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n, k;
    cin >> n>>k;
    int i = 0, r = 0, l = 0;
    pbds<pair<int,int>> pb;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    while (r < n)
    {
     
        pb.insert({v[r],r});
        if (r-l+1 == k)
        {
            cout<<pb.find_by_order((k-1)/2)->first<<" ";
            pb.erase({v[l],l});
            l++;
        }
       
        r++;
    }

    return 0;
}
