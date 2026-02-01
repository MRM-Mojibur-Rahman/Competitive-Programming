#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len, place;
    cin >> len >> place;
    int array[len];
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        cin >> array[i];
        if (array[0]==0)
        {
            cout<<ans;
            return 0;
        }
        
    }
    for (int i = 0; i < len; i++)
    {
         if (array[i]==0)
        {
            cout<<ans;
            return 0;
        }
        if (array[i] < array[place - 1])
        {
            break;
        }
        else
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}