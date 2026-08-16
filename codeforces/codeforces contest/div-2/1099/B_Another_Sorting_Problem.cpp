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
    int lest = 0;
    for (int i = 1; i < n; i++)
    {
        
            lest = max(lest, a[i - 1] - a[i]); 
    }
    for (int i = 1; i < n; i++)
    {

        if (a[i] < a[i - 1]) a[i]+=lest;
        if (a[i] < a[i - 1])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
