#include <bits/stdc++.h>
using namespace std;
#define ll long long

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// s.find_by_order(position); value
// s.order_of_key(25);  elements < 25
// less_equal for multiset

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pbds<int> st;
        vector<pair<int, int>> point(n);
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            st.insert(x);
            point[i] = {y, x};
        }
        sort(point.rbegin(), point.rend());
        ll ans = 0 ;
        for (int i = 0; i < n; i++)
        {
            auto p = point[i];
            int x  = p.second;
            ans+=(ll)st.size()-st.order_of_key(x+1);
            st.erase(x);
        }
        cout<<ans<<endl;
    }
    return 0;
}
