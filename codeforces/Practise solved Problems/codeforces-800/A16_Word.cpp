#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[101];
    cin >> s;
    int low = 0, up = 0;
    int len = strlen(s);
    
    
    for (int i = 0; i < len; i++)
    {
        (s[i] >= 65 && s[i] <= 90) ? up++ : low++;
    }
    if (low >= up)
    {
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i]+=32;
                cout << s[i] ;
            }
            else
            {
               cout << s[i] ;
            }
            
        }
       
    }
    else
    {
         for (int i = 0; i < len; i++)
        {
            if ( s[i] > 90)
            {
                s[i]-=32;
                cout << s[i];
            }
            else
            {
                cout << s[i];
            }
            
        }
    }
    

    return 0;
}