#include<iostream>

using namespace std;
int res=0;

int jiaogu(int n){
    res++;
    printf("%d ",n);
    if(n==1) return 1;
    if(n%2==0) return jiaogu(n/2);
    else return jiaogu(n*3+1);
    //角谷定理。输入一个自然数，若为偶数，则把它除以2，若为奇数，则把它乘以3加1。
    //经过如此有限次运算后，总可以得到自然数值1。
}
int main(void){
    int n;
    scanf("%d",&n);
    jiaogu(n);
    printf("\nSTEP=%d",res-1);
    return 0;
}