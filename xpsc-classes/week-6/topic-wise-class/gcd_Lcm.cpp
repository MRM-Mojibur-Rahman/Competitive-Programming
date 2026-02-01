#include <bits/stdc++.h>
using namespace std;
#define ll long long
int GCD(int a, int b)
{
    return __gcd(a, b); // time complexitiy O(log(min(a,b)))
}
int LCM(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}
/*---- gcd(a,b) * lcm(a,b) == a*b ----*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 0; i < 11; i++)
    {
        int a, b;
        cin >> a;
        if (a == -1)
        {
            continue;
        }
        cin >> b;
        cout << GCD(a, b) << endl;
    }

    // int a ,b; cin>>a>>b;
    // cout<<GCD(a,b)<<endl;
    // cout<<LCM(a,b);
    return 0;
}
