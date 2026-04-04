#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    n=7;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
   
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(i<6)
        {
            ans-=a[i];
            
        }
        else ans+=a[i];

       
    }
    cout << ans << endl;
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
