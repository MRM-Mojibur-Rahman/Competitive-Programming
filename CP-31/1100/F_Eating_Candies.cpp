#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n + 1,0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<ll> alice(n + 1, 0), bob(n + 1, 0);
    for (int i = 1; i <= n; i++)
        alice[i] = alice[i - 1] + a[i];


    for (int i = n; i >= 1; i--)
    {
        if(i==n) bob[i]=a[i];
        else bob[i]=bob[i+1]+a[i];
    
    }
   

    int ans = 0;
   
    

    int l = 1, r = n;
    while (l < r)
    {
       
       
        if (alice[l] > bob[r])
            r--;
        else if (alice[l] < bob[r])
            l++;
        else
        {
        

            ans = max(ans, l +( n - r + 1));
            l++, r--;
        }
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
