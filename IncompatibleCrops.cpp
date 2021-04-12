#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int r,c,count=0;
    cin>>r>>c;
    char a[25][25];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j]; 
        }
    }
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        { 
             if(a[i][j]=='.')
                      {
                  if( a[i-1][j]!='*' && a[i][j-1]!='*' &&  a[i+1][j]!='*' && a[i][j+1]!='*' )
                     count++;
                      }
        }
    }
    cout<<count<<endl;
    return 0;
}
