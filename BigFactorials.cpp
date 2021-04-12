#include<bits/stdc++.h>
using namespace std;
long long int f(int n)
{
    if(n>1)
    return n*f(n-1);
    else
    return 1;
}
int main()
{
    int a,c=0;
    cin>>a;
    if(a>=20)
    {
        cout<<0<<endl;
        return 0;
    }
    long long int x=f(a);
    string s=to_string(x);
    long long int y=s.size();
    if(y>=4){
    for(long long int i=y-4;i<y;i++)
    {
        if(s[i]!='0')
        c++;
        {
        if(c>=1)
        cout<<s[i];
        }
        if(i==y-1 && c==0)
        cout<<c;
    }
    }
    if(y==3)
    {
          for(long long int i=y-3;i<y;i++)
    {
         if(s[i]!='0')
        c++;
        {
        if(c>=1)
        cout<<s[i];
        }
        if(i==y-1 && c==0)
        cout<<c;
    }
    }
    
    if(y==2)
    {
          for(long long int i=y-2;i<y;i++)
    {
        if(s[i]!='0')
        c++;
        {
        if(c>=1)
        cout<<s[i];
        }
        if(i==y-1 && c==0)
        cout<<c;
    }
    }
    
    if(y==1)
    {
        cout<<s[0];
    }
    cout<<endl;
    return 0;
}
