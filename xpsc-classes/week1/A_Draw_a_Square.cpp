
/*i go for hard way that casue to many wa*/
/*i lerned from it to compare to float variables */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float l, r, u, d;
        cin >> l >> r >> d >> u;
        float lu = sqrt(l * l + u * u),
              ld = sqrt(l * l + d * d),
              ru = sqrt(u * u + r * r),
              rd = sqrt(d * d + r * r),
              ud = sqrt(lu * lu + ld * ld),
              lr = sqrt(lu * lu + ru * ru);
        float lr1 = (float)l + r;
        float ud1 = (float)u + d;
 
        if (lu == ld && ld == ru && ru == rd && abs(lr - lr1) < 0.0001 && abs(ud - ud1) < 0.0001)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}

/*esay way */
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t; 
//     if (!(cin >> t)) return 0;
//     while (t--) {
//         int l, r, d, u;
//         cin >> l >> r >> d >> u;
//         if (l == r && r == d && d == u) cout << "Yes\n";
//         else cout << "No\n";
//     }
//     return 0;
// }
