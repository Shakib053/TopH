#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
b[i]=a[i];
sort(b,b+n);
int aa=b[2];
for(int i=0;i<n;i++)
{
    if(a[i]==aa)
    {
        cout<<i+1<<endl;
        break;
    }
}

return 0;
}
