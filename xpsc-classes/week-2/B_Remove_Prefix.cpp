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
        vector<int> num(n);
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        int ans = 0;
        vector<bool> seen(n + 1, false);
        for (int i = n - 1; i >= 0; i--)
        {
            if (seen[num[i]])
            {
                break;
            }
            else
            {

                seen[num[i]] = true;
                ans++;
            }
        }
        cout<<n-ans<<endl;
    }
    return 0;
}
