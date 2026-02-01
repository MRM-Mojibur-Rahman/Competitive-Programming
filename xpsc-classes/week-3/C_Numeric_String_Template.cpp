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
        /*-----input----------*/
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int m;
        cin >> m;
        /*------execution for every string ------------*/
        for (int i = 0; i < m; i++)
        {
            string a;
            cin >> a;
            int len = a.size();
            if (len != n)
            {
                cout << "NO\n";
                continue;
            }
            map<int, char> mp;
            map<char, int> ci;
            bool is = true;
            for (int i = 0; i < n; i++)
            {
                auto it = mp.find(v[i]);
                if (it == mp.end())
                {
                    mp[v[i]] = a[i];
                }
                else
                {
                    if (mp[v[i]] != a[i])
                        is = false;
                }
                auto it1 = ci.find(a[i]);
                if (it1 == ci.end())
                {
                    ci[a[i]] = v[i];
                }
                else
                {
                    if (ci[a[i]] != v[i])
                        is = false;
                }
            }
            if(is) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
