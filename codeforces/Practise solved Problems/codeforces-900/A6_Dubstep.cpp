#include <bits/stdc++.h>
using namespace std;

int main()
{
    string song;
    cin >> song;
    int s = 0;
    for (int i = 0; i < song.size(); i++)
    {
        if (song[i] == 'W' && song[i + 1] == 'U' && song[i + 2] == 'B')
        {
            if (i != 0 && s != 1)
            {
                cout << ' ';
            }
            s = 1;
            i += 2;
        }
        else
        {
            cout << song[i];
            s = 0;
        }
    }

    return 0;
}