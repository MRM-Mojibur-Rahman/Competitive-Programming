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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        int geter = 0, small = 0, xs = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > x)
                geter++;
            else if (x == v[i])
                xs++;
            else
                small++;
        }
        if (geter == 0 || small == 0|| xs>0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
