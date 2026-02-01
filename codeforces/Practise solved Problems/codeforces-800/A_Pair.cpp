#include<iostream>
#include<set>

using namespace std;
int  main(){
    pair<string,string>p;
    set<pair<string,string>>s;
    int n;
    cin>>n;
    while (n--)
    {
        string tree,cl;
        p.first=tree;
        p.second=cl;
        s.insert(p);
    }
   cout<< s.size()<<endl;

    
    return 0;
}
