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
        int n, k, temp;
        cin >> n >> k >> temp;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll cnt = 0, ans = 0,j=1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= temp)
            {

                cnt++;
                if (cnt == k)
                    ans++;
                else if (cnt > k)
                    ans += cnt-(k-1) ;
                
            }
            else
                cnt = 0;
        }
        cout << ans << endl;
    }
    return 0;
}
