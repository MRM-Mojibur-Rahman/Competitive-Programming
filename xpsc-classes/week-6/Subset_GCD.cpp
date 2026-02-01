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
        int n , k;cin>>n>>k;
        int mx = 1;
        // if(n>3)
        for (int i = 2; n/i>=k; i++)
        {
             mx=i;
        }
        for (int i = 1; i <=k; i++)
        {
            cout<<mx*i<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
