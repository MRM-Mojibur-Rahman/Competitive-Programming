#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<ll> odd(n + 1, 0), even(n + 1, 0);
    set<ll>s;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
            odd[i] += a[i];
        else
            even[i] += a[i];
        odd[i] += odd[i - 1];
        even[i] += even[i - 1];

        if(odd[i]-even[i]==0 || s.find(odd[i]-even[i])!=s.end())
        {
            cout<<"YES\n";
            return;

        }
       s.insert(odd[i]-even[i]);
    }
    cout<<"NO\n";
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
