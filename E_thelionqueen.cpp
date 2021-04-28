#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
unsigned ll a,b,p,q;
cin>>a>>b;
p=a*b;
q=b-1;
int z=__gcd(p,q);
p=p/z;
q=q/z;
cout<<p<<" "<<q<<endl;
return 0;
}
