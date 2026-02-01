#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        map<int, set<int>> mp;
        cin>>n>>q;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }
        for (int i = 0; i < q; i++)
        {
            int a, b;
            cin >> a >> b;
            if (mp.find(a) == mp.end() || mp.find(b) == mp.end())
                cout << "NO" << endl;
            else
            {
                int li = *mp[a].begin();
                int ri = *mp[b].rbegin();
                if (li <= ri)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}
