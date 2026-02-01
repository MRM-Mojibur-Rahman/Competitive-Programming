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
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        { 
            cin>>v[i];
        }
        int l = 0, r = 0, sum = 0, ans = -1;
        while (r < n)
        {
            sum += v[r];
            while (sum > s)
            {
                sum -= v[l];
                l++;
            }
            if (sum == s)
                ans = max(ans, r - l + 1);
            r++;
        }
        if (ans == -1)
            cout << -1 << endl;
        else
            cout << n - ans << endl;
    }
    return 0;
}
