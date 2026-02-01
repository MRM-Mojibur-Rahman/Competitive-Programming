#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    pair<string, int> studets[n]; /*-----array of pair-----*/
    for (int i = 0; i < n; i++)
    {

        cin >> studets[i].first >> studets[i].second;

    }
    for(auto[x,y]: studets) cout<<x<<" "<<y<<endl;

    return 0;
}
