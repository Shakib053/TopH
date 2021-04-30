#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
int sm=0,mm=0;
for(int i=0;i<n;i++)
{
    sm=sm+(a[n-1]-a[i]);
}
for(int i=1;i<n;i++)
{
    mm=mm+abs(a[0]-a[i]);
}
if(sm<=mm)
cout<<"Add Light Bulbs\n";
else
cout<<"Remove Light Bulbs\n";
return 0;
}
