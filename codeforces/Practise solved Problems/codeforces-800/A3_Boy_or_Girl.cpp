#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin >> name;
    int alpha[26]={0};
    int limit = name.size();
    for (int i = 0; i < limit; i++)
    {
        alpha[name[i] - 97]++;
    }
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > 0) {ans++;}
    }
    
    
    (ans%2==0)?cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";

    return 0;
}