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
        vector<int> v(n, 0);
        for (int i = 0; i < n-1; i++)
        {
            cin >> v[i];
        }
        vector<int> a(n);
        a[0] = v[0];
        for (int i = 1; i < n-1; i++)
        {
            a[i] = v[i] | v[i - 1];
        }
        a[n-1] = v[n-2];
        bool is = false;
        for (int i = 0; i < n-1; i++)
        {
            if ((a[i] & a[i + 1]) != v[i])
                is = true;
        }
        if (is)
            cout << -1;
        else
            for (auto x : a)
                cout << x << " ";
        cout << endl;
    }
    return 0;
}
