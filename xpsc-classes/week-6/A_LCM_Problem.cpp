#include <bits/stdc++.h>
using namespace std;
#define ll long long
// int LCM(int a , int b)
// {
//     return (a/__gcd(a,b))*b;
// }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        ll x,y;
        cin>>x>>y;
        ll mul = x , i =2;
        bool is = true;
        while (mul<=y)
        {
            mul*=i++;
            if(mul<=y)
            {
                cout<<x<<" "<<mul<<endl;
                is =false;
                break;
            }
            
        }
        if(is)
        {
            cout<<-1<<" "<<-1<<endl;
        }
        


    }
    return 0;
}
