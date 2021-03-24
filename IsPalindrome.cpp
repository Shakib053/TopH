#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{   
    string a;
    cin>>a;
    int j,count=0;;
    int n=a.size();
    string b;
    for(int i=n-1,j=0;i>=0,j<n;i--,j++)
    {
       b[j]=a[i];
    }
    for(int m=0;m<n;m++)
    {
        if(a[m]==b[m])
        {
            count++;
        }
    }
    if(count==n)
    {
        cout<<"Yes\n";
    }
    else
    {
     cout<<"No\n";
    }
    return 0;

}