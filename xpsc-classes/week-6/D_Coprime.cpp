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
        vector<int> v(1001, -1);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[x] = i + 1;
        }
        int best = -1;
        best = max(best, v[1] + v[1]);
        for (int i = 1; i < 1001; i++)
        {
            for (int j = i+1 ; j < 1001; j++)
            {
                if (__gcd(i, j) == 1 && v[i]!=-1&&v[j]!=-1)
                {
                    best = max(best, v[i] + v[j]);
                }
            }
        }

        cout << best << endl;
    }
    return 0;
}
