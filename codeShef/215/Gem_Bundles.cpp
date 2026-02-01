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
        vector<int> cl(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> cl[i];
        }
        sort(cl.begin(), cl.end());
        int ans = 10 * cl[0];
        for (int i = 0; i < 3; i++)
        {
            ans += (cl[i] - cl[0]) * 3;
        }
        cout << ans << endl;
    }
    return 0;
}
