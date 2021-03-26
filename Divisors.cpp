#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;

#define ll long long
#define pi 3.1416
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        cout<<i<<endl;
    }
	return 0;
}
