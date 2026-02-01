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
        multiset<int> ms;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ms.insert(x);
        }
        int ans = 0;
        auto it = ms.begin();
        while (!ms.empty())
        {
            auto cu = ms.find(*it + 1);
            ms.erase(it);
            if (cu != ms.end())
            {

                it = cu;
            }
            else
            {
                ans++;
                it = ms.begin();
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
