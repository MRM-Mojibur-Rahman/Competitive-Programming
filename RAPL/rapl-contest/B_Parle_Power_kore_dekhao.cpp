#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long pow1=b*log(a);
    long long pow2=d*log(c);
    if (pow1 == pow2)
    {
        cout << "NO" << endl;
    }
    else if (pow2>pow1)
    {
        cout << "NO" << endl;
    }
    
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}