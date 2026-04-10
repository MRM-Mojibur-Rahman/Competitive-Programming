#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (mp[a[i]] == 0)
            mp[a[i]] = i;
    }
    // for(auto [x,y]:mp) cout<<x<<" "<<y<<endl;
    for (int i = 0; i < q; i++)
    {
        int p;
        cin >> p;
        cout << mp[p] << " ";
        int idx = mp[p];
        mp[p] = 1;
        for (auto [x, y] : mp)
        {
            if (x != p)
            {
                if (y < idx)
                {
                    mp[x] = y + 1;
                }
            }
        }
    }

    return 0;
}
