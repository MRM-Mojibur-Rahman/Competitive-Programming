#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, r;
    cin >> l >> r;
    int difa = abs(l - r);
    if (difa <= 1)
        cout << l + r << endl;
    else
        cout << 2 * max(l, r) - 1 << endl;
    return 0;
}
