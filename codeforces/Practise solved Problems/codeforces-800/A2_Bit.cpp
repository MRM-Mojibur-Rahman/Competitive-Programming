#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    int ans=0;
    for (int t = 0; t < test_case; t++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin.ignore();
            char a;
            cin >> a;
            if (a == '+')
            {
                ans++;
                break;
            }
            else if (a == '-')
            {
                ans--;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}