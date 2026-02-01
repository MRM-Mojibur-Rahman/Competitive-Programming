#include <bits/stdc++.h>
using namespace std;
struct cmp {
    bool operator()(pair<int,int> a, pair<int,int> b) {
      
        if (a.first == b.first)
            return a.second > b.second; 
        return a.first < b.first; 
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    priority_queue<pair<int, int>,vector<pair<int,int>>,cmp> poly;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>mono;
    map<int,bool>visit;
    int seri = 1;
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        if (q == 1)
        {

            int m;
            cin >> m;
            poly.push({m, seri});
            mono.push({seri, m});
            visit[seri]=false;
            seri++;
        }
        else if (q == 2)
        {
            pair<int, int> customer;
            while (!mono.empty())
            {
                customer = mono.top();
                mono.pop();
                if (!visit[customer.first])
                    break;
            }
            cout << customer.first << " ";
            visit[customer.first] = true;
        }
        else
        {
            pair<int, int> customer;
            while (!poly.empty())
            {
                customer = poly.top();
                poly.pop();
                if (!visit[customer.second])
                    break;
            }
            cout << customer.second << " ";
           
             visit[customer.second] = true;
        }
      
    }

    return 0;
}
