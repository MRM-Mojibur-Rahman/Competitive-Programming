
//         ll r = 1, l = 0, sumf = f[0];ll ans = (sumf<=k)? 1: 0;
//         bool is = false;
//         while (r < n)
//         {
//             if (h[r - 1] % h[r] == 0)
//             {
//                 sumf += f[r];
//                 while (sumf > k)
//                 {
//                     sumf -= f[l];
//                     l++;
//                 }
//                 ans = max(ans, r - l + 1);
//                 is = true;
//             }
//             else
//             {
//                 ans = max(ans, r - l);
//                 l = r;
//                 sumf = f[r];
//             }

//             r++;
//         }


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> h(n), f(n);
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        // ll r = 0, l = 0, sumf = 0, ans = 0;
        ll r = 1, l = 0, sumf = f[0];
        ll ans = (sumf<=k)? 1: 0;
        bool is = false;
        while (r < n)
        {
            if (r > l && (h[r] == 0 || h[r-1] % h[r] != 0)) {
                l = r;
                sumf = 0;
            }
            sumf+=f[r];
            while (sumf>k)
            {
                sumf-=f[l];
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
            
        }

        cout << ans << endl;
    }

    return 0;
}
