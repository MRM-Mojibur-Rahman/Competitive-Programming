#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    set<int> s;
    while (t--)
    {
        int x;
        cin >> x;
        int y;
        cin >> y;
        if (x == 1)
        {
            s.insert(y);
        }
        else if (x == 2)
        {
            if (s.find(y) != s.end())
                s.erase(y);
        }
        else
        {
            if (s.find(y) == s.end())
            {
                cout << "No\n";
            }
            else cout << "Yes\n";
            
        }
    }
    return 0;
}
