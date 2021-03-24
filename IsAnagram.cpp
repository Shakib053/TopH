#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{   
    
   string a,b;
   cin>>a>>b;
   int count=0;
   int a1=a.size();
   int b1=b.size();
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   if(a1!=b1)
   {
       cout<<"No\n";
   }
   else
   {
       
       for(int i=0;i<a1;i++)
       {
           if(a[i]==b[i])
           {
               count++;
           }
       }
       if(count==a1)
       {
           cout<<"Yes\n";
       }
       else{
           cout<<"No\n";
       }
   }
    return 0;

}