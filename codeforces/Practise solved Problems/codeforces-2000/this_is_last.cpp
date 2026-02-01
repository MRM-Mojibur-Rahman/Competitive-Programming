#include <bits/stdc++.h>
using namespace std;
int main()
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
            /* code */
        }
        
        for (int j = 0; j < locations.size(); j++)
        {
            if (query[i] == locations[j])
            {
                auto it1 = find(locations.begin(), locations.end(), 1);
                if (it1 == locations.end())
                {
                    locations.insert(locations.begin(),1);
                }
                auto it2 = find(locations.begin(), locations.end(), n);
                if (it2 == locations.end())
                {
                    locations.insert(locations.begin(),n);
                }
            }
            else if (query[i] > locations[j])
            {
                auto it1 = find(locations.begin(), locations.end(), locations[j]);
                if (it1 == locations.end())
                {
                    locations.insert(locations.begin(),locations[j]);
                }
                auto it2 = find(locations.begin(), locations.end(), locations[j]+1);
                if (it2 == locations.end())
                {
                    locations.insert(locations.begin(),locations[j]+1);
                }
            }
            else if (query[i] < locations[j])
            {
                auto it1 = find(locations.begin(), locations.end(), locations[j]);
                if (it1 == locations.end())
                {
                     locations.insert(locations.begin(),locations[j]);
                }
                auto it2 = find(locations.begin(), locations.end(), locations[j]-1);
                if (it2 == locations.end())
                {
                    locations.insert(locations.begin(),locations[j]-1);
                    
                    cout<<query[i]<<" "<<locations[j]-1<<endl;
                }
            }
        }
        // cout << locations.size()<<" ";
    }
   


    return 0;
}