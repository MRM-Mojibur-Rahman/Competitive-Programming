#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x;
    cin >> n >> x;
    vector<pair<long long, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        long long y;
        cin >> y;
        v[i] = {y, i};
    }
    sort(v.begin(), v.end());
    bool is = true;
    for (int i = 0; i < n; i++)
    {

        int l = i+1, r = v.size() - 1;
        ll tsum = v[i].first;

        while (l < r)
        {

            if (tsum+v[l].first + v[r].first == x)
            {
                set<int>s;
                s.insert(v[i].second);
                s.insert(v[l].second);
                s.insert(v[r].second);
                for(auto y : s) cout<<y+1<<" ";
                
                
                return 0;
            }
            else if (tsum+v[l].first + v[r].first > x)
                r--;
            else
                l++;
        }
    }

   
        cout << "IMPOSSIBLE\n";
    return 0;
}
