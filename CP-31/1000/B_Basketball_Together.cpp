#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    sort(a.begin(), a.end());
    // for(auto it:a) cout<<it<<" ";
    int l = 0, r = n - 1;
    int ans = 0;
    while (l <= r)
    {
        if (a[r] > d)
            ans++, r--;
        else
        {
              if (d / a[r] + l <= r)
                {
                    ans++;
                    
                    l += d / a[r];
                    r--;
                }
                else
                    break;
           
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}
