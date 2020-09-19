#include<iostream>
#include<cstdio>
int main(void){double m,n;int p;std::scanf("%lf%lf%d",&m,&n,&p);std::printf("%.2lf",p==0?(m*0.973+n)/2:(m+n)*1.087/2);}