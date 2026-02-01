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
        int n, x;
        cin >> n >> x;

        if (n >= x)
        {
            n = n - x;
            cout << n * (n + 1) / 2 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}
