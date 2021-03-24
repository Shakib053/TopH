#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{   
   int h,m;
   cin>>h>>m;
   double hd=(h*30)+(m*0.5);
   double md=m*6;
   double x=abs(hd-md);
   if(x<=180)
   cout<<fixed<<setprecision(6)<<x<<endl;
   else 
   cout<<fixed<<setprecision(6)<<360-x<<endl;
    
    return 0;

}