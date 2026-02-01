#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<string, int> emails;
    while (t--)
    {
        string name;
        cin >> name;
        if (emails.find(name) != emails.end())
        {
            auto nth = emails[name];
            emails[name]++;
            name += to_string(nth);
            nth++;
        

            emails.insert({name, 1});
            cout << name << endl;
        }
        else
        {
            emails.insert({name, 1});
            cout << "OK" << endl;
        }
    }

    return 0;
}
