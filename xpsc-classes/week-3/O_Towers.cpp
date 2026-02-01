#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int>ms;
   

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(ms.upper_bound(x)!=ms.end())
        {
            ms.erase(ms.upper_bound(x));
            
        }
        ms.insert(x);
        
    }

    


    cout << ms.size() << endl;

    return 0;
}
