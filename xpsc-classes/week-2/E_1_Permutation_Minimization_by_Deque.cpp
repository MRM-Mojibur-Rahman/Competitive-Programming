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
        deque<int> ans;

        int x, y;
        cin >> y;
        ans.push_back(y);
        for (int i = 1; i < n; i++)
        {
            cin >> x;
            if (ans.front()>x) ans.push_front(x);
            else ans.push_back(x);
        }
        for(auto x: ans) cout<<x<<" ";
        cout<<'\n';

    }
    return 0;
}
