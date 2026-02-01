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
        cin>>n;
        vector<int> num(n);
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
            (num[i] % 2 == 0) ? even++ : odd++;
        }
        if (even != 0 && odd != 0)
        {
            sort(num.begin(), num.end());
        }
        for (int x : num)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
