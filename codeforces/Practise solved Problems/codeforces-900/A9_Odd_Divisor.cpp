#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        long long n;
        cin >> n;
        if (n % 2 == 0)
        {
            int f = 0;
            while (n != 1)
            {
                if (n % 2 != 0)
                {
                    cout << "YES" << endl;
                    f = 1;
                    break;
                }
                n /= 2;
            }
            if (f == 0)
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}