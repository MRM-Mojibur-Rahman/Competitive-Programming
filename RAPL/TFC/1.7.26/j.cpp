#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;

    int hodd = 0, hev = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if (a[i] % 2)
            hodd = a[i];
        else
            hev = a[i];
    }

    auto ok = [&](int x)
    {
        int he = x + x - 2;
        int ho = he - 1;

        if (hodd > ho || hev > ho)
            return false;

        int cnt = 1;
        for (int i = ho; i >= x; i--)
        {
            if (mp[i] > cnt)
                return false;
            cnt++;
        }
        
        for (size_t i = 0; i < count; i++)
        {
            /* code */
        }
        

        return true;
    };

    int l = 1, r = INT_MAX;
    int ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;

    return 0;
}
