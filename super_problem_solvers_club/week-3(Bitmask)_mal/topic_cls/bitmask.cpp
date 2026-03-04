#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int mask = 0; mask < (1<<n); mask++)
    {
        cout<<mask<<" -> ";
        for (int i = 0; i < n; i++)
        {
            if((mask >> i) & 1) 
            {
                cout<<1<<" ";
            }
            else cout<<0<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}
