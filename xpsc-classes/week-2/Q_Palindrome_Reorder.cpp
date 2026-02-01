
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;
    vector<int> alph(26, 0);
    for (char c : a)
        alph[c - 'A']++;

    int odd = 0, idx = -1;
    for (int i = 0; i < 26; i++)
    {
        if (alph[i] % 2 == 1)
        {
            odd++;
            idx = i;
        }
    }

    if (odd > 1)
    {
        cout << "NO SOLUTION\n";
    }
    else
    {
        string ans;
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < alph[i] / 2; j++)
                ans += (char)(i + 'A');
        }

        cout << ans;
        if (idx != -1)
            for (int i = 0; i < alph[idx] % 2; i++)
                cout << (char)(idx + 'A');
        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    }

    return 0;
}
