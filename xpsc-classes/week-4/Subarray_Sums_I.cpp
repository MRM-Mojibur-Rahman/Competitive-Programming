#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0, r = 0, ans = 0, tsum = 0;
    while (l < n)
    {
        if ( tsum < x)
        {
            tsum += v[r];
            if(r<n)r++;
            else tsum -= v[l], l++;
        }
        else if (tsum > x)
            tsum -= v[l], l++;

        if (tsum == x)
            ans++, tsum -= v[l++];
    }
    cout << ans << endl;

    return 0;
}
