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
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n-i;j++)
    {
        cout<<" ";
    }
    for(int k=1;k<=i;k++)
    {
        cout<<"*";
        if(k!=i)
        cout<<" ";
    }
    cout<<endl;
}


return 0;
}
