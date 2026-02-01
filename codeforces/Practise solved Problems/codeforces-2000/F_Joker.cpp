#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> query(q);
        for (int i = 0; i < q; i++)
        {
            cin >> query[i];
        }
        vector<int> locations;
        locations.push_back(m);
        int end = 1;
        int lend = end;
        for (int i = 0; i < q; i++)
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
            else
            {
                
                for (int j = 0; j < lend; j++)
                {
    
                    if (query[i] == locations[j])
                    {
                        auto it1 = find(locations.begin(), locations.end(), 1);
                        if (it1 == locations.end())
                        {
                            locations.insert(locations.begin(), 1);
                            end++;
                        }
                        auto it2 = find(locations.begin(), locations.end(), n);
                        if (it2 == locations.end())
                        {
                            locations.insert(locations.begin(), n);
                            end++;
                        }
                    }
                    else if (query[i] > locations[j])
                    {
                        auto it1 = find(locations.begin(), locations.end(), locations[j]);
                        if (it1 == locations.end())
                        {
                            locations.insert(locations.begin(), locations[j]);
                            end++;
                        }
                        auto it2 = find(locations.begin(), locations.end(), locations[j] + 1);
                        if (it2 == locations.end())
                        {
                            locations.insert(locations.begin(), locations[j] + 1);
                            end++;
                        }
                    }
                    else if (query[i] < locations[j])
                    {
                        auto it1 = find(locations.begin(), locations.end(), locations[j]);
                        if (it1 == locations.end())
                        {
                            locations.insert(locations.begin(), locations[j]);
                            end++;
                        }
                        auto it2 = find(locations.begin(), locations.end(), locations[j] - 1);
                        if (it2 == locations.end())
                        {
                            locations.insert(locations.begin(), locations[j] - 1);
                            end++;
                        }
                    }
                }
            }
            

            lend = end;
            // cout << locations.size() << " ";
        }
        for (int i = 0; i < locations.size(); i++)
        {
            cout << locations[i] << " ";
        }

        cout << endl;
    }
    return 0;
}