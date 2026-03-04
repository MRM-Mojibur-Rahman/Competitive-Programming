#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int bad = 0, good = 0,odd = 0;
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        if (s[i] == s[j])
            good++;
        else
            bad++;
    }
    string a(n+1,'0');
    if(n%2==1) odd = 1;
    for (int i = 0; i <= good; i++)
    {
        for (int j = 0; j <= odd; j++)
        {
            a[i*2 + bad + j] = '1';
        }
        
    }
    cout<<a<<endl;


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
