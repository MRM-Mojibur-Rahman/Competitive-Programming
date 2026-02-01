#include <bits/stdc++.h>
using namespace std;
#define ll long long
/* ------------------------vvp-------------*/
/* in this problem i realise that 2d prefix sum problem are problems
 that have 2 point ,  have to find out contribution between them ,  the point or anyting 
 equvalent to point thats contributions can be represented in gird */
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<vector<ll>> gird(1005, vector<ll>(1005, 0));
        vector<vector<ll>> presum(1005, vector<ll>(1005, 0));
        for (int i = 0; i < n; i++)
        {
            ll r ,c;
            cin>>r>>c;
            gird[r][c]+=r*c;
        }
        for (int i = 1; i < 1005; i++)
        for (int j = 1; j < 1005; j++)
        {
            presum[i][j] = gird[i][j] + presum[i][j - 1] + presum[i - 1][j] - presum[i - 1][j - 1];
        }
        while (q--)
        {
            ll r1, c1, r2, c2;
            cin >> r1 >> c1 >> r2 >> c2;
            r1++;
            c1++;
            r2--;
            c2--;
            cout << presum[r2][c2] - presum[r1-1][c2] - presum[r2][c1-1] + presum[r1 - 1][c1 - 1]<<endl;
        }
        
    }
    return 0;
}
