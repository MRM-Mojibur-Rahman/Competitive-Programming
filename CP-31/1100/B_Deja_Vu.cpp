#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n), m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x = 31;
    for (int i = 0; i < q; i++)
    {
        int y;
        cin >> y;
        if (y < x)
        {
            m.push_back(y);
            x = y;
        }
    }

    q = m.size();
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[j]%(1<<m[i])==0)
            {
                a[j]+=(1<<(m[i]-1));
            }
        }
        
    }
    for(auto &it:a) cout<<it<<" ";
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
