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
        string s;
        cin >> s;
        int ans = 0;
        bool blackSt = false;
        int si = 0;
        vector<int> bPoit;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == '1')
            {
                blackSt = true;
                bPoit.push_back(i);
            }
        }
        if (blackSt)
        {
            if (bPoit.size() > 1)
            {
                for (int i = 0; i < bPoit.size() - 1; i++)
                {
                    
                    ans += bPoit[i + 1] - bPoit[i] - 1;
                }

                cout << ans << endl;
            }
            else
                cout << 0 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}
