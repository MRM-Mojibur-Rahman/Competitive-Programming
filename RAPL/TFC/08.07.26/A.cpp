
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<double> a(n);
   
    for (auto &it : a)
        cin >> it;
    vector<int> ans;
    vector<pair<double, int>> neg, negf, neg1;

    double mx = INT_MIN, mxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 1.00)
            ans.push_back(i + 1);
        else if (a[i] < -1.00)
            neg.push_back({a[i], i});
        else if (a[i] == -1.00)
            neg1.push_back({a[i], i});
        else if (a[i] > -1.00 && a[i] < 0)
            negf.push_back({a[i], i});
        if (a[i] < 1.00 && a[i] >= 0)
        {
            if (mx < a[i])
                mx = max(mx, a[i]), mxi = i + 1;
        }
    }

    int len = neg.size();
    sort(neg.begin(),neg.end());
    if (len % 2 && neg1.size() >= 1)
    {
        for (auto [x, y] : neg)
            ans.push_back(y + 1);
        ans.push_back(neg1[0].second + 1);
    }
    else {

        for (int i = 0; i < len-1; i++)
        {
             ans.push_back(neg[i].second + 1);
        }
        
    }



    sort(negf.begin(), negf.end());
    if (ans.size() == 0)
    {
        if (neg1.size() > 1)
        {
            ans.push_back(neg1[0].second + 1);
            ans.push_back(neg1[1].second + 1);
        }
        else if (negf.size() >= 1 && neg1.size() == 1 && -negf[0].first > mx)
        {
            ans.push_back(negf[0].second + 1);
            ans.push_back(neg1[0].second + 1);
        }
        else if (negf.size() > 1 && neg1.size() == 0 && negf[0].first * negf[1].first > mx)
        {

            ans.push_back(negf[0].second + 1);
            ans.push_back(negf[1].second + 1);
        }
        else if (negf.size() > 1 && negf[0].first > mx)
        {
            ans.push_back(negf[0].second + 1);
        }
        else
            ans.push_back(mxi);
    }

    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (auto it : ans)
        cout << it << " ";
    cout << endl;

    return 0;
}
