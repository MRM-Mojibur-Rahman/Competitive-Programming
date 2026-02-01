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
        vector<char> v(6);
        for (int i = 0; i < 6; i++)
        {
            cin >> v[i];
        }
        int w = 0;
        bool prw = false,is=false;
        for (int i = 0; i < 6; i++)
        {
            if (v[i] == 'W' && prw)
            {
                w++;
                if (w >= 3)
                {
                    cout << "YES\n";
                    is=true;
                    break;
                }
            }
            else if (v[i] == 'W')
            {
                w++, prw = true;
            }
            else
            {
                w = 0;
                prw = false;
            }
        }
        if(!is)
        cout << "NO\n";
    }
    return 0;
}
