#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
        vector<int>ans;
        ans.push_back(0);
        for (int i = 1; i < n-1; i++)
        {
            if(a[i]>a[i-1]&&a[i]<a[i+1]) continue;
            if(a[i]<a[i-1]&& a[i]>a[i+1]) continue;
            ans.push_back(i);
        }
        ans.push_back(n-1);
    cout << ans.size() << endl;
    for (auto it : ans)
        cout << a[it] << " ";
    cout << endl;
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
