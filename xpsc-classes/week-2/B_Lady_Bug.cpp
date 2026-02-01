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
        string a, b;
        cin >> a >> b;
        vector<int> one, zero;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
                one.push_back(i);
            if (b[i] == '0')
                zero.push_back(i);
        }
        if (one.size() > zero.size())
        {
            cout << "NO" << endl;
            continue;
        }
        int odd1 = 0, even1 = 0, odd0 = 0, even0 = 0;
        for (int i = 0; i < one.size(); i++)
        {
            if (one[i] % 2 == 0 )
                even1++;
            else
                odd1++;
        }
        for (int i = 0; i < zero.size(); i++)
        {

            if (zero[i] % 2 == 0 )
                even0++;
            else
                odd0++;
        }
        
        if (even1 <= odd0 && odd1 <= even0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
