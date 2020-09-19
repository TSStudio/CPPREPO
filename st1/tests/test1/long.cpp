#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(void){
    freopen("long.in","r",stdin);
    freopen("long.out","w",stdout);
    int ax=0,ay=0,bx=0,by=0;
    scanf("%d%d%d%d",&ax,&ay,&bx,&by);
    double l=sqrt(pow(ax-bx,2)+pow(ay-by,2));
    printf("%.3lf",l);
}