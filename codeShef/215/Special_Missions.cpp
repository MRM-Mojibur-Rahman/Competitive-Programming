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
        int n, g;
        cin >> n >> g;
        vector<int> a(n);
        string miss;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin>>miss;
        int ans = 0, cmpt = 0;

        
        for (int i = 0; i < n; i++)
        {
            if (miss[i] == '1')
            {
                cmpt += a[i];

            }
            else
                ans += a[i];
        }
        if (cmpt > g && ans >= g)
        {
            ans += cmpt - g;
        }
        cout << ans << endl;
    }
    return 0;
}
