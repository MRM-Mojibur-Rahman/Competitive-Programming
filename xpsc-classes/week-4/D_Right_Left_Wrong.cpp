#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n), prsum(n, 0);

        string a;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i > 0)
                prsum[i] = v[i] + prsum[i - 1];
            else
                prsum[i] = v[i];
        }
        cin >> a;
        int l = 0, r = n - 1;
        long long ans = 0;

        while (l < r)
        {
            if (a[l] == 'L' && a[r] == 'R')
            {
                ans +=(long long) prsum[r] - ((l != 0) ? prsum[l-1] : 0);
                l++,r--;
            }
            if(a[l]!='L') l++;
            if(a[r]!='R') r--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
