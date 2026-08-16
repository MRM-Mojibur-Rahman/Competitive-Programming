#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, w;
    cin >> n >> w;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        vector<int> tmp(a.begin(), a.begin() + i+1); // o(k)
        sort(tmp.rbegin(), tmp.rend());            // O(klog(k))

        int cnt = w;
        bool is = true;
        // for (auto it : tmp)
        //     cout << it << " ";
        // cout << endl;
        for (int j = 0; j <= i; j += 2) // o(k)
        {
            if (tmp[j] <= cnt)
            {
                // cout<<tmp[j]<<endl;
                cnt -= tmp[j];
            }
            else
                is = false;
        }
        if (is)
            ans = i + 1;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
