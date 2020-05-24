#include<iostream>
#include<cstdio>
using namespace std;
int n,i;
long long s[1001];
int main()
{ 
  	freopen("pigmate.in","r",stdin);
  	freopen("pigmate.out","w",stdout);    
  	cin>>n; 
  	s[0]=0; s[1]=0; s[2]=1;
  	for (i=3;i<=n;i++)
    s[i]=(i-1)*(s[i-1]+s[i-2]);
  	cout<<s[n];  
  	fclose(stdin); 
	fclose(stdout); 
  return 0;
}
