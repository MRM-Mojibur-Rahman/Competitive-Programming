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
        int l, r;
        cin >> l >> r;
        int even = 0 , odd = 0 ;
        for (int i = l; i <= r; i+=l)
        {
            if(i%2==0) even+=i;
            else odd+=i;

        }
        if(even>=odd) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
