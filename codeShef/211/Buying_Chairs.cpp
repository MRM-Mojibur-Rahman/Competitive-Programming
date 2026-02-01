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
        int w, p, to;
        cin >> w >> p >> to;
        int ans = 0;
        if (to >= w)
        {
            ans += (w * 2);
        // cout<<ans<<endl; 
           
            ans += (to - w);
           
        // cout<<ans<<endl;

            
        }
        else if (to < w)
            ans += (to * 2);
        cout<<ans<<endl;
    }
    return 0;
}
