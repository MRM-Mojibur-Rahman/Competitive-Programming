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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool fal = true;
        for (int i = 0; i < n - 1; i++)
        {
            if ((b[i] >= b[i + 1]  && a[i + 1] >= a[i])|| (b[i+1]>=b[i] && a[i]>=a[i+1]))
                fal = false;
        }
        if (fal)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
