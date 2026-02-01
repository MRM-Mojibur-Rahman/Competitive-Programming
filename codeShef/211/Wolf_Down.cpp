#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        bool one = true;
       int  ans =0;
        for (int i = 0; i < n; i++)
        {
            if(one && a[i]=='0' ) ans++;
            else one = false;

        }
        cout<<ans<<endl;
    }
    return 0;
}
