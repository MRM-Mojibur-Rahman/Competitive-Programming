#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n>>q;
    vector<priority_queue<int>> pq(n);
    while (q--)
    {
        int x;
        cin >> x;
        int ind;
        cin >> ind;
        if (x == 0)
        {
            int num;
            cin >> num;
            pq[ind].push(num);
        }
        else if (x == 1)
        {
            if (!pq[ind].empty())
                cout << pq[ind].top()<<endl;
        }
        else
        {
            if (!pq[ind].empty())
            {
                pq[ind].pop();
            }
        }
    }

    return 0;
}
