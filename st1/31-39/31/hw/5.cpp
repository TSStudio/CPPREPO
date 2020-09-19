#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int comp(const double & a,const double &b){
    return a>b;//判断两个数的大小
}
int main(){
    int x=1,y=1,n,i;//设置，x,y是累加器，n是人数；
    double a[50],b[50],m;//double类型，两个数组，m是身高
    string s;//男性还是女性
    cin>>n;//输入n,为n个人
    for(int i=1;i<=n;i++){
        cin>>s>>m;//输入性别 及 身高
        if(s=="male"){
            a[x]=m;
            x++;
        }
        if(s=="female"){
            b[y]=m;
            y++;
        }
    }
    sort(a+1,a+x);
    sort(b+1,b+y,comp);
    for(int i=1;i<x;i++)
        printf("%.2lf ",a[i]);
    for(int i=1;i<y;i++)
        printf("%.2lf ",b[i]);
    return 0;
}