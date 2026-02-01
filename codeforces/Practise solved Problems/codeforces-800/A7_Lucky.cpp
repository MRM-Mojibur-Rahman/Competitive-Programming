#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        string s;
        cin >> s;
        
        int fri=0,sec=0;
        for (int i = 0; i < 6 ; i++)
        {
            if (i<3)
            {
                fri+=s[i]-48;
            }
            else
            {
                sec+=s[i]-48;
            }
            
            
        }
        if (fri==sec)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
        
    }
    return 0;
}