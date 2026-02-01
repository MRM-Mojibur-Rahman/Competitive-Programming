#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin>>test_case;
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
    int end;
    for (int i = 0; i < q; i++)
    {
        if (i == 0)
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
                    locations.push_back(m + 1);
                }
                else if (query[i] < m)
                {
                    locations.push_back(m);
                    locations.push_back(m - 1);
                }
            }
        }
        else
        {
            for (int j = 0; j < end; j++)
            {
                if (query[i] == locations[j])
                {
                    auto it1 = find(locations.begin(), locations.end(), 1);
                    if (it1 == locations.end())
                    {
                        locations.push_back(1);
                    }
                    auto it2 = find(locations.begin(), locations.end(), n);
                    if (it2 == locations.end())
                    {
                        locations.push_back(n);
                    }
                }
                else if (query[i] > locations[j])
                {
                    auto it1 = find(locations.begin(), locations.end(), locations[j]);
                    if (it1 == locations.end())
                    {
                        locations.push_back(locations[j]);
                    }
                    auto it2 = find(locations.begin(), locations.end(), locations[j] + 1);
                    if (it2 == locations.end())
                    {
                        locations.push_back(locations[j] + 1);
                    }

                    // locations.push_back(m);
                    // locations.push_back(m + 1);
                }
                else if (query[i] < locations[j])
                {
                    auto it1 = find(locations.begin(), locations.end(), locations[j]);
                    if (it1 == locations.end())
                    {
                        locations.push_back(locations[j]);
                    }
                    auto it2 = find(locations.begin(), locations.end(), locations[j] - 1);
                    if (it2 == locations.end())
                    {
                        locations.push_back(locations[j] - 1);
                    }
                    // locations.push_back(m);
                    // locations.push_back(m - 1);
                }
            }
        }
        cout << locations.size() << " ";
        end = locations.size();
    }
        cout<<endl;
    }
    return 0;
}