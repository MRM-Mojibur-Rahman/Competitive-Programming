#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c;
    cin >> r >> c;
    vector<vector<int>> array(r + 1, vector<int>(c + 1));
    vector<vector<int>> presum(r + 1, vector<int>(c + 1, 0));
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
            cin >> array[i][j];

    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
        {
            presum[i][j] = array[i][j] + presum[i][j - 1] + presum[i - 1][j] - presum[i - 1][j - 1];
        }

    int s1, f1, e2, ef2;
    cin >> s1 >> f1 >> e2 >> ef2;
    cout<<presum[e2][ef2]-presum[e2][1]-presum[1][ef2]+presum[s1-1][f1-1];

    // for (int i = 1; i <= r; i++)
    // {
    //     for (int j = 1; j <= c; j++)
    //         cout << presum[i][j] << " ";
    //     cout << endl;
    // }

    return 0;
}
