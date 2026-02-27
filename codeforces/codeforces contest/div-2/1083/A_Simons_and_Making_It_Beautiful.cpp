#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    // for(auto &it:a) cin>>it;
    int idx = 0, cng = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == n)
        {
            idx = i;
        }
    }
    int mx = a[0];
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) == max(a[i], mx))
        {
            cng = i;
            break;
        }
        mx = max(a[i],mx);
    }
    // cout<<idx<<" "<<cng<<endl;
    if(cng<idx)
    swap(a[idx],a[cng]);
    for(auto it:a) cout<<it<<" ";
    cout<<endl;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
