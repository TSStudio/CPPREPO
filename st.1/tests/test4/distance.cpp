#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(void){
    freopen("distance.in","r",stdin);
    freopen("distance.out","w",stdout);
    double a1,a2,a3,a4;
    double res;
    cin>>a1>>a2>>a3>>a4;
    res=abs(a1-a3)+abs(a2-a4);
    printf("%.3lf",res);
    fclose(stdin);
    fclose(stdout);
    return 0;
}