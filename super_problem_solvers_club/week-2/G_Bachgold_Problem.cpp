#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << n / 2 << endl;

    if (n % 2 == 0)
    {
        while (n != 0)
        {
            cout << 2 << " ";
            n -= 2;
        }
    }
    else
    {

        for (int i = 1; i <= n / 2 - 1; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
    return 0;
}
