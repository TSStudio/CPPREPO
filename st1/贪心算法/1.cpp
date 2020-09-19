#include<iostream>

using namespace std;

int main(void){
    int N,p1,p2,p3,p4,p5,p6,y,x;
    int u[4]={0,5,3,1};

    cin>>p1,p2>>p3>>p4>>p5>>p6;
    N=p4+p5+p6+((p3+3)/4);
    y=5*p4+u[p3%4];
    if(p2>y)N+=(p2-y+8)/9;
    x=36*N-36*p6-25*p5-16*p4-9*p3-4*p2;
    if(p1>x)N+=(p1-x+35)/36;
    printf("%d\n",N);
    return 0;
}