
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int tem = 0;
        int r = i+1;
        while (r<n-1)
        {
            if((a[r-1]<=a[r]&&a[r]<=a[r+1]) ||(a[r-1]>=a[r]&&a[r]>=a[r+1])) break;
            r++;
        }

        tem = r-i+1;
        ans = max(ans, tem);
    }
    cout << ans << endl;

    return 0;
}
