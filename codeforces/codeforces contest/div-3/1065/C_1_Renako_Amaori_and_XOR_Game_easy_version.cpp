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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        int oneA = 0, oneB = 0, oEve = 0, oOdd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)

                oneA++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == 1)

                oneB++;
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1 && i % 2 == 1 && b[i] == 0)
                oEve++;

            if (b[i] == 1 && i % 2 == 0 && a[i] == 0)
                oOdd++;
        }
        bool aji = false, mai = false;
        if (oneA % 2 == 1)
            aji = true;
        if (oneB % 2 == 1)
            mai = true;

        if (aji && mai)
            cout << "Tie\n";
        else if (aji)
            cout << "Ajisai\n";
        else
            cout << "Mai\n";
    }
    return 0;
}
