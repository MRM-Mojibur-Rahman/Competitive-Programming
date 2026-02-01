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

    int n , k;
    cin>>n>>k;
    pbds<int>ans;
    for (int i = 1; i <=n; i++)
    {
        ans.insert(i);
    }
    int idx = k-1;
    while (n--)
    {
        auto it = ans.find_by_order(idx);
        cout<<*it<<" ";
        ans.erase(it);
        if(n)
        idx = (2 + idx) % n;
    }
    
    
    
    return 0;
}
