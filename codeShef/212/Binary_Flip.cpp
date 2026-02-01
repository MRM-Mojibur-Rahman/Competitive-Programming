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
        string s;
        cin >> s;
        int o1 = 0, z0 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0' && s[i+1]=='0')
                z0++;
            else if (s[i] == '1'&& s[i+1]=='1')
                o1++;
        }
        if(o1>=z0) cout<<0<<endl;
        else {
            cout<<(z0-o1+1)/2<<endl;
        }
    }
    return 0;
}
