#include <bits/stdc++.h>
using namespace std;
int main()
{
    string line1;
    string line2;
    cin >> line1;
    cin >> line2;
    int n = line1.size();
    for (int i = 0; i < n; i++)
    {
        if (line1[i] > 96)
        {
            line1[i] -= 32;
        }
        if (line2[i] > 96)
        {
            line2[i] -= 32;
        }
    }
    
    int ans = line1.compare(line2);
   cout<<ans;
    

    return 0;
}