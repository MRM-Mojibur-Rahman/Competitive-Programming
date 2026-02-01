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
        string a, b;
        cin >> a >> b;
        int as = a.size(), bs = b.size();
        int br = 0, ar = 0;
        int ans = 0;
        for (int i = bs - 1; i >= 0; i--)
        {
            if (b[i] != '1')
                br++;
            else
            {
                break;
            }
        }

        for (int i = as - 1-br; i >= 0; i--)
        {
            if (a[i] != '1')
            {
                ans++;
            }
            else
            {
                // cout << i << endl;
                break;
            }
        }
        // cout << "br-" << br << endl;
        cout<<ans<<endl;
    }
    return 0;
}
