#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }
    for (int i = 0; i < q; i++)
    {
        int w;
        cin >> w;
        if (w == 0)
        {
            int x;
            cin >> x;
            ms.insert(x);
        }
        else if (w == 1)
        {
            cout << *ms.begin() << endl;
            ms.erase(ms.begin());
        }
        else
        {
            cout << *ms.rbegin() << endl;
            auto it = prev(ms.end());
            ms.erase(it);
        }
    }

    return 0;
}
