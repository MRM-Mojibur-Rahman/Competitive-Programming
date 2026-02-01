// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int>a(n);
//         for(int i = 0 ; i < n ; i++ ) cin>>a[i];
//         int l = 0 , r = n-1 , L = 1 , R= n;
//         for(;l<=r;)
//         {
//             if(a[l]==L) {l++,L++;continue;}
//             if(a[l]==R) {l++,R--;continue;}
//             if(a[r]==L) {r--,L++;continue;}
//             if(a[r]==R) {r--,R--;continue;}
//             cout<<l+1<<" "<<r+1<<endl;
//             break;
//         }
//         if(l>r) cout<<-1<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        set<int> s;
        vector<int> a(n + 6);
        for (int i = 1; i <= n; i++)
            cin >> a[i], s.insert(i);
        int l = 1, r = n;
        while (l < r)
        {
            if (a[l] == *s.begin() || a[l] == *s.rbegin())
                s.erase(a[l++]);
            else if (a[r] == *s.begin() || a[r] == *s.rbegin())
                s.erase(a[r--]);
            else
                break;
        }
        if (l == r)
            cout << -1 << "\n";
        else
            cout << l << " " << r << '\n';
    }
    return 0;
}
