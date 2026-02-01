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
        int x, y, z;
        cin >> x >> y >> z;
        ((float)z / (x * y) > .5) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
