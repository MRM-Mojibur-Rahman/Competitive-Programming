#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> v(n);
        for (auto &it : v)
            cin >> it;
        sort(v.rbegin(), v.rend());
        vector<ll> presum(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {

            presum[i] = presum[i - 1] + v[i - 1];
        }
        while (q--)
        {
            int ans = -1;
            ll k;cin>>k;
            auto it = lower_bound(presum.begin(),presum.end(),k);
            if(it!=presum.end())
            {
                ans = it - presum.begin();
            }
            cout<<ans<<endl;
        }
        
    }
    return 0;
}
