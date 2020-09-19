#include<iostream>
#include<cstdio>
using namespace std;
long long n,m,k,a[10000005];
int main()
{
// 	freopen("fight.in","r",stdin);
// 	freopen("fight.out","w",stdout);
    scanf("%lld",&n);
    for(int i=1;i<=n;++i)
        scanf("%lld",&a[i]);
    long long x,y;
    scanf("%lld%lld%lld%lld",&m,&x,&y,&k);
    if(m==1 || m==n)
    {
    	printf("%d",m);
    	fclose(stdin);
    	fclose(stdout);
    	return 0;
    }
    a[x]+=y;
    long long l=0,r=0;
    for(int i=1;i<=n;++i){
        if(i<m)l+=(long long)a[i]*(m-i);
        else r+=(long long)a[i]*(i-m);
    }
    if(l<r){
        long long t=m-((r-l)/k);
        if((r-l)%k>k/2)t--;
        printf("%lld",max(t,(long long)1));
    }
    else if(l>r){
        long long t=m+((l-r)/k);
        if((l-r)%k>k/2)t++;
        printf("%lld",min(t,(long long)n));
    }
    else if(l==r) printf("%lld",m);
// 	fclose(stdin);
// 	fclose(stdout);
    return 0;
}