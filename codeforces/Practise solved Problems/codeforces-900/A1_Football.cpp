#include <bits/stdc++.h>
using namespace std;
int main()
{
    string posi;
    cin >> posi;
    int fr = 1;
    int last = posi[0];
    for (int i = 1; i < posi.size(); i++)
    {
        if (last == posi[i])
        {
            fr++;
            if (fr >= 7)
            {
                cout << "YES";
                
                return 0;
            }
        }
        else
        {
            fr = 1;
            last = posi[i];
        }
    }

    cout << "NO";

    return 0;
}