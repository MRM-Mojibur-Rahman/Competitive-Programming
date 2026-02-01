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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int s = v[0] * 2, epoint = v[n - 1] * 2;
        int ans = 0;
        while (s <= epoint)
        {
            int l = 0, r = n - 1, sum = 0;
            while (r > l)
            {
                if (v[r] + v[l] == s)
                {
                    sum++;
                    l++;
                    r--;
                }
                else if (v[r] + v[l] > s)
                {
                    r--;
                }
                else
                    l++;
            }
            ans = max(ans, sum);
            s++;
        }
        cout << ans << endl;
    }
    return 0;
}
