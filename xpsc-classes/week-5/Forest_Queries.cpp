#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c,q;
    cin >> r >> q;
    c=r;
    vector<vector<ll>> forest(r + 1, vector<ll>(c + 1,0));
    vector<vector<ll>> presum(r + 1, vector<ll>(c + 1, 0));
    char x;
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
        {
            cin >> x;
            if (x == '*')
                forest[i][j] = 1;
        }

    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
        {
            presum[i][j] = forest[i][j] + presum[i][j - 1] + presum[i - 1][j] - presum[i - 1][j - 1];
        }
        while (q--)
        {
            int r1, c1, r2, c2;
            cin >> r1 >> c1 >> r2 >> c2;
            cout << presum[r2][c2] - presum[r1-1][c2] - presum[r2][c1-1] + presum[r1 - 1][c1 - 1]<<endl;
        }
        

    

    return 0;
}
