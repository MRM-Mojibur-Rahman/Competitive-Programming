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
//         string a;
//         cin >> a;
//         vector<int> lastCap, lastSm;
//         for (int i = 0; i < a.size(); i++)
//         {
//             if (a[i] == 'B')
//             {
//                 a[i] = '#';
//                 if (!lastCap.empty())
//                 {
//                     a[lastCap.back()] = '#';
//                     lastCap.pop_back();
//                 }
//                 continue;
//             }
//             if (a[i] == 'b')
//             {
//                 a[i] = '#';
//                 if (!lastSm.empty())
//                 {
//                     a[lastSm.back()] = '#';
//                     lastSm.pop_back();
//                 }
//                 continue;
//             }
//             if (a[i] >= 'A' && a[i] <= 'Z')
//             {
//                 lastCap.push_back(i);
//             }
//             if (a[i] >= 'a' && a[i] <= 'z')
//             {
//                 lastSm.push_back(i);
//             }
//         }
//         for (int i = 0; i < a.size(); i++)
//         {
//             if(a[i]=='#') continue;
//             else cout<<a[i];
//         }
//         cout<<endl;
        
//     }
//     return 0;
// }

