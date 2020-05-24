#include<iostream>
#include<cstdio>

using namespace std;

int a[15][15];
int f(int n,int m){
    if(n<0) return 0;
    if(n==0||m==1) return 1;
    return f(n,m-1)+f(n-m,m);
}
int main(){
    freopen("apple.in","r",stdin);
    freopen("apple.out","w",stdout);
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d",f(n,m));
    fclose(stdin);
    fclose(stdout);
    return 0;
}