#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
   string a;
   cin>>a;
   int n=a.size()-3;
   while(n>0)
   {
       a.insert(n,",");
       n=n-3;
   }
   cout<<a;
    return 0;

}