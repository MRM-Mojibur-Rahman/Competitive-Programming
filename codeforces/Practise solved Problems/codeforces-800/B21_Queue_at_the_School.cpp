#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int n,time;
   cin>>n>>time;
   string row;
   cin>>row;
   for (int i = 0; i < time; i++)
   {
        for (int j = 0; j < n-1; j++)
        {
           if (row[j]=='B'&&row[j+1]=='G')
           {
            
                swap(row[j],row[j+1]);
                j++;
           }
           
        }
        
    }
    cout<<row<<endl;
   
    return 0;
}