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
        string a;
        cin >> a;

        vector<int> v;
        bool one = false, pal = true, incre = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
                incre = false;
        }

        for (int i = 0; i < n / 2; i++)
        {
            if (a[i] != a[n - 1 - i])
            {
                v.push_back(i), v.push_back(n - 1 - i);
                pal = false;
            }
        }
        
        if (pal)
        {
            cout << 0 << endl;
        }

        cout << endl;
    }
    return 0;
}
