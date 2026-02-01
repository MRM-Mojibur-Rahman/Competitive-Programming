#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> querry(q);
    for (int i = 0; i < q; i++)
    {
        cin >> querry[i];
    }
    set<int> locations;
    int end = 0;
    int f = 1;

    for (int i = 0; i < q; i++)
    {
        end = locations.size();
        // cout<<end;
        if (i == 0)
        {
            if (querry[i] == m)
            {
                locations.insert(1);
                locations.insert(n);
            }
            else if (querry[i] > m)
            {
                locations.insert(m);
                locations.insert(m + 1);
            }
            else if (querry[i] < m)
            {
                locations.insert(m);
                locations.insert(m - 1);
            }
        }

        for (auto x = locations.begin(); x != locations.end()-1; x++)
        {

            if (querry[i] == *x)
            {
                locations.insert(1);
                locations.insert(n);
            }
            else if (querry[i] > *x)
            {
                locations.insert(*x);
                locations.insert(*x + 1);
            }
            else if (querry[i] < *x)
            {
                locations.insert(*x);
                locations.insert(*x - 1);
            }
            f++;
        }

        // cout << locations.size() << " ";
    }

    return 0;
}