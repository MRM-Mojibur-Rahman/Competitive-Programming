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
        vector<pair<int, int>> v;
        if (n >= 3)
        {
            v.push_back({n - 2, n});
            v.push_back({n - 1, n - 1});

            for (int i = n - 1; i >= 3; i--)
            {
                v.push_back({i, i - 2});
            }
        }
        else{
            for (int i = n; i >=2; i--)
            {
                v.push_back({i,i-1});
            }
            
        }
        cout << 2 << endl;
        for (int i = 0; i < n - 1; i++)
        {
            cout << v[i].first << " " << v[i].second << endl;
        }
    }
    return 0;
}
