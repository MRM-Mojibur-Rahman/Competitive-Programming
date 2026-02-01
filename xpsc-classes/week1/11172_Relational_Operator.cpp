#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        ll l ,r ;
        cin>>l>>r;
        if (l==r) cout<<"=\n";
       else if(l>r) cout<<">\n";
       else cout<<"<\n";
        
    }
    return 0;
}
