#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;cin>>n;
    // O(n)
    // for (int i = 1; i <= n; i++)
    // {
    //     if(n%i==0)
    //     cout<<i<<" ";
    // }
    /*---------O(sqrt(n))--------*/
    for (int i = 1; i*i <=n ; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            if(n/i!=i)
            cout<<n/i<<" ";
        }
    }
    
    
    return 0;
}
