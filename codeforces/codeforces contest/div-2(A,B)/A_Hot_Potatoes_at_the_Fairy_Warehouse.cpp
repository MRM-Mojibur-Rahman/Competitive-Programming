#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string a;
    cin >> a;

    int r = 0, b = 0;

    for (int i = 0; i < 2 * n; i++)
    {


        if (a[i] == '1')
        {

            if (a[(i + 1) % (2*n)] == '0' && k!=0)
            {
                
                if (i % 2 == 0)
                {
                    r++;
                }
                else
                    b++;
            }
            else
            {

                if (i % 2 == 0)
                    b++;
                else
                    r++;
            }
        }
    }

    cout << r << " " << b << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
