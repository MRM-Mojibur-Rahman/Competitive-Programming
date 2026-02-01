#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int an,bn;
    cin>>an>>bn;
    vector<int>a(an);
    pbds<int>pb;
    vector<int>b(bn);
    for (int i = 0; i < an; i++)
    {
        cin>>a[i];
        pb.insert(a[i]);
    }
    for (int i = 0; i < bn; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < bn; i++)
    {
        cout<<pb.order_of_key(b[i])<<" ";
    }
    
    

    return 0;
}