#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int e[n];
int chor[n];
for(int i=0;i<n;i++)
{
    cin>>e[i];
}
for(int i=0;i<n;i++)
{
    cin>>chor[i];
}
sort(e,e+n);
sort(chor,chor+n);
int cnt=0;
for(int i=0;i<n;i++)
{
    if(e[i]!=chor[i])
    {
        cout<<"YES\n";
        break;
    }
    else
   cnt++;
}
if(cnt==n)
cout<<"NO\n";


return 0;
}
