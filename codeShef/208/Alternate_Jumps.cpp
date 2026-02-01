#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll oddsum(int m)
{

    int n = (m / 2) + 1;

    ll sm = (n * (2 * 1 + (n - 1) * 2)) / 2;
    return sm;
}
ll evensum(int m)
{

    int n = m / 2;
    

    ll sm = (n * (2 * 2 + (n - 1) * 2)) / 2;
    return sm;
}

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
        int m = n - 1;

        ll odd =( m % 2 == 1) ? oddsum(m) : oddsum(m - 1);
        ll even = (m % 2 == 0) ? evensum(m) : evensum(m - 1);
        if (m % 2 == 0)
        {
            cout<< n + odd - even << endl;
        }
        else
            cout << n + even - odd << endl;
    }
    return 0;
}
