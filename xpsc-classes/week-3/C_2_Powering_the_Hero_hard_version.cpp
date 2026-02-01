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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        long long ans = 0;
        priority_queue<int> power;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0 && !power.empty())
            {
                ans += power.top(), power.pop();
                
            }
            else power.push(v[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
