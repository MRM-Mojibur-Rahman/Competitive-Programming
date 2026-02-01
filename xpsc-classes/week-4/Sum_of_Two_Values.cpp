#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x;
    cin >> n >> x;
    vector<pair<long long, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        long long  y;
        cin >> y;
        v[i] = {y, i};
    }
    sort(v.begin(), v.end());
    int l = 0, r = v.size() - 1;
    bool is = true;
    while (l < r)
    {

        if (v[l].first + v[r].first == x)
        {
            cout << v[l].second + 1 << " " << v[r].second + 1 << endl;
            is = false;
            return 0 ;
            l++, r--;
        }
        else if (v[l].first + v[r].first > x)
            r--;
        else
            l++;
    }
    if (is)
        cout << "IMPOSSIBLE\n";
    return 0;
}
