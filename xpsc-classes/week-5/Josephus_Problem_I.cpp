#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// s.find_by_order(position); value
// s.order_of_key(25);  elements < 25
// less_equal for multiset
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    pbds<int> ans;
    for (int i = 01; i <= n; i++)
    {
        ans.insert(i);
    }
    int indx = 1 % n;
    while (n--)
    {
        auto it = ans.find_by_order(indx);
        cout<<*it<<" ";
        ans.erase(it);
        if(n)
        indx = (1 + indx) % n;
    }

    return 0;
}
