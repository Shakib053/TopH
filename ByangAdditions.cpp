#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
using namespace std;
int main()
{
int a,b,a1,b1;
cin>>a>>b;
while (a>0 && b>0)
{

    a1=a%10;
    a=a/10;
    b1=b%10;
    b=b/10;
    if(a1+b1>=10)
    {
        cout<<"Yes\n";
        return 0;
    }
    
}
cout<<"No\n";

return 0;
}
