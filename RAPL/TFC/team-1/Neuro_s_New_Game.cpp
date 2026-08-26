#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;

    int lst0 = n, lst1 = n;


    int cnt0 = 0, cnt1 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == '1')
            break;
        else
            lst0 = i;
    }
 

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == '0')
            break;
        else
            lst1 = i;
    }
    for (auto it : a)
        if (it == '1')
            cnt1++;
        else
            cnt0++;

    if (cnt0 > n - 1 || cnt1 > n - 1)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> ans(n, -1);

    int x = 0;
    for (int i = lst0; i < n; i++)
    {
        if (a[i] == '0')
            ans[i] = x, x++;
    }

    
    

    for (int i = 0; i < lst0; i++)
    {
        if (a[i] == '0')
            ans[i] = x, x++;
    }

     x = n - 1;
    for (int i = lst1; i < n; i++)
    {
        if (a[i] == '1')
            ans[i] = x, x--;
    }

    for (int i = 0; i < lst1; i++)
    {
        if (a[i] == '1')
            ans[i] = x, x--;
    }



    for (auto it : ans)
        cout << it << " ";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    
    while (t--)
    {
        solve();
    }
    return 0;
}
