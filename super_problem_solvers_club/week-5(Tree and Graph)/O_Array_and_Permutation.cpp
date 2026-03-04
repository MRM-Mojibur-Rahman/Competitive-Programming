
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n), a(n), a1;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a1.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        
        if (a[i] == a1.back())
        {
            continue;
        }
        a1.push_back(a[i]);
    }
    int idx = 0;
    for (int i = 0; i < n && idx < a1.size(); i++)
{
    if (a1[idx] == p[i])
        idx++;
}
    if(idx==a1.size()) cout<<"YES\n";
    else cout<<"NO\n";

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
