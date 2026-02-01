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
        int n, r, c;
        cin >> n >> r >> c;
        vector<int> v(n);
        for (auto &it : v)
            cin >> it;
        sort(v.begin(), v.end());
        int mx = max(r, c);
        int mn = min(r, c);
        int getter = upper_bound(v.begin(), v.end(), mx) - v.begin();
        int smaller = upper_bound(v.begin(), v.end(), mn) - v.begin();
        
        if (getter == smaller)
            cout << smaller / 2 << endl;
        else
        {
            getter -=smaller;
            if(getter>=smaller) cout<<smaller<<endl;
            else if(getter<smaller) cout<<getter+(int)(smaller-getter)/2<<endl;
        }
    }
    return 0;
}
