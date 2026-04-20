#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int a, b;
    cin >> a >> b;
    // cout<<a<<" "<<b<<endl;
    auto times = [&](int x)
    {
        int tem =a;
        int cnt = 0;
        while (tem)
        {
            tem/= x;
            cnt++;
        }
        return cnt + (x - b);
    };
    int ans = times((b == 1) ? b + 1 : b);
    // cout<<times(2)<<endl;
    // cout<<times(3)<<endl;
    for (int i = b+1;; i++)
    {
        int cur = times(i);
        // cout<<cur<<endl;
        if(cur>ans) break;
        ans = cur;
    }
    
    

    cout << ans<< endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
