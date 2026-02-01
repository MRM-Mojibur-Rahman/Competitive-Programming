#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, int>> colors(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        colors[i] = {x, y};
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        // cout<<"host"<<colors[i].first<<" "<<colors[i].second<<endl;

        for (int j = 0; j < n; j++)
        {
        // cout<<"host"<<colors[j].first<<" "<<colors[j].second<<endl;
        
            if (i == j)
            {
                continue;
            }
            if (colors[i].first == colors[j].second)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
