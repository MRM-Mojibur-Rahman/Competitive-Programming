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
        vector<int> v(n), vn;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vn = v;
        sort(vn.begin(), vn.end());
        map<int, int> ans;
        ans[vn[0]] = -1;
        ans[vn[n - 1]] = -1;
        for (int i = 1; i < n - 1; i++)
        {
            long long left_mid = (vn[i - 1] + vn[i]) / 2;
            long long right_mid = (vn[i] + vn[i + 1]) / 2;
            ans[vn[i]] = right_mid - left_mid;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[v[i]] << " ";
        }

        cout << endl;
    }
    return 0;
}
