#include<iostream>
#include<cstring>
using namespace std;
int n,m,a[105][105];
char s;
int main()
{
    memset(a,0,sizeof a);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            cin>>s;
            if(s=='*')
                a[i][j]=1;
            else
                a[i][j]=0;
        }
    for(int i=1;i<=n;i++)
   {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]==1)
                cout<<"*";
            else
                cout<<a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1]+a[i-1][j-1]+a[i+1][j-1]+a[i-1][j+1]+a[i+1][j+1];
        }
        cout<<endl;
   }
}