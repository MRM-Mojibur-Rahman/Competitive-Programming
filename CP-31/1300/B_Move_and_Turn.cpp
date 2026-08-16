#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    if(n==1) 
    {
        cout<<4<<endl;
        return 0;
    }
    if (n % 2 == 0)
    {
        cout << (n / 2 + 1)*(n / 2 + 1) << endl;
    }
    else
    {
        cout << 2 * (n / 2 + 1) * (n / 2 + 2) << endl;
    }
    return 0;
}
