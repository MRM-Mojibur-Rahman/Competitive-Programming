#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    multiset<int>want;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        want.insert(x);
    }
    vector<int>have(m);
    for(auto &it:have) cin>>it;
    sort(have.begin(),have.end());
    int ans =0;
    for (int i = 0; i < m; i++)
    {
        auto it = want.lower_bound(have[i]-k);
        if(it!=want.end() && *it<=have[i]+k)
        {
            ans++;
            want.erase(it);
        }
    }
    cout<<ans<<endl;
    

    return 0;
}
