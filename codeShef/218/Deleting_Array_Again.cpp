#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        vector<int> item(n), cost(n);
        for (int i = 0; i < n; i++)
        {
            cin >> item[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> cost[i];
        }
        int ans = 0;
        int cos = cost[0];
        for (int i = 0; i < n; i++)
        {
            if(cost[i]<cos)
            {
                cos = cost[i];
            }
            ans+=item[i]*cos;
        }
        cout<<ans<<endl;
        
        
    }
    return 0;
}
