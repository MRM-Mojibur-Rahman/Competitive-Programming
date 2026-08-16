#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, string> mp;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        int y;
        cin >> y;

        mp[y] = x;
    }

    for (auto [key, value] : mp)
    {
        cout << key << " " << value << endl;
    }

    return 0;
}
