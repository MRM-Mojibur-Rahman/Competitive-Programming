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
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i], mp[v[i]]++;
        }
        vector<int> ans;

        for (auto it = mp.rbegin(); it != mp.rend(); ++it)
        {

            ans.push_back(it->first);
            mp[it->first]--;
        }

        for (auto it = mp.rbegin(); it != mp.rend(); ++it)
        {

            for (int i = 0; i < it->second; i++)
            {
                ans.push_back(it->first);
            }
        }
        for (int x : ans)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
