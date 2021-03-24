
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{   
   int a,c=0;
   cin>>a;
   int n=a;
   for(int i=2;i<n;i++)
   {
       if(a%i==0){
       cout<<"No\n";
       break;
       }
       else
       c++;
   }
   if(c==a-2){
   cout<<"Yes\n";
   }
    return 0;

}