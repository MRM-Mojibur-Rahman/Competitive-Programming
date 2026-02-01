#include<bits/stdc++.h>
using namespace std;
int main ()
{
    
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> query(q);
    for (int i = 0; i < q; i++)
    {
        cin >> query[i];
    }
    vector<int> locations;
    for (int i = 0; i < q; i++)
    {
         if (i==0)
         {
            if (i == 0)
            {

                if (query[i] == m)
                {
                    locations.push_back(1);
                    locations.push_back(n);
                }
                else if (query[i] > m)
                {
                    locations.push_back(m);
                    locations.push_back(m+1);
                }
                else if (query[i] < m)
                {
                    locations.push_back(m);
                    locations.push_back(m-1);
                }
            }
         }
         cout<<locations.size()<<" ";
         
    }
    


    return 0;
}