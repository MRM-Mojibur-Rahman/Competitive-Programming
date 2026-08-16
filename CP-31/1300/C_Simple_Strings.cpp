#include <bits/stdc++.h>
using namespace std;
#define ll long long
char cng(char a, char b)
{
    for (int i = 0; i < 26 ; i++)
    {
        if('a'+i !=a && 'a'+i!=b) return 'a'+i;
    }
    
}
void solve()
{
    string a;
    cin >> a;
    int n = a.size();
    if (n == 2 && a[1] == a[0])
    {
        a[1] = cng(a[1], a[1]);
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            a[i] = cng(a[i - 1], a[(i == n - 1) ? i - 1 : i + 1]);
        }
    }
    cout << a << endl;
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
