
#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define ll long long
#define pi 3.1416
using namespace std;


int main()
{   
    int f[50];
    f[0]=1;
    f[1]=1;
    int n1=0,n2=1;
    int a;
    cin>>a;
    for(int i=1;i<a;i++)
    {
        int n3=n1+n2;
        f[i]=n3;
        n1=n2;
        n2=n3;
    }
    cout<<f[a-1]<<endl;
	return 0;
}