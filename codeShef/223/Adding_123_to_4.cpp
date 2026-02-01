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

        int x, y, z;
        cin >> x >> y >> z;
        int ans = (x + z) / 2 + (y / 2);
        cout << ans << endl;
    }
    return 0;
}
