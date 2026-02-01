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
        vector<vector<string>> players(3, vector<string>(n));
        map<string, int> wr;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {

                cin >> players[i][j];
                if (wr.find(players[i][j]) != wr.end())
                {
                    wr[players[i][j]] -= 2;
                }
                else
                {
                    wr[players[i][j]] = 3;
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            int ans = 0;
            for (int j = 0; j < n; j++)
            {

                ans += (wr[players[i][j]] <0) ? 0 : wr[players[i][j]];
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}
