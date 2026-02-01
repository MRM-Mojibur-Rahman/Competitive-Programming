#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    string stones;
    cin >> stones;
    int ans = 0,f=0;

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (stones[i] == stones[j])
            {
                ans++;
            }
            else
            {
                i = j - 1;
                break;
            }
            if (j==n-1)
            {
               f=1;
            }
            
        }
        if (f==1)
        {
           break;
        }
        
        
    }

    cout << ans;

    return 0;
}