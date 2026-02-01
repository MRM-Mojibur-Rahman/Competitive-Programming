#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> monsters(n);
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> monsters[i];
            if(monsters[i]==1) one++;
        }
        n-=one/2;
        cout<<n<<endl;

    }

    return 0;
}
