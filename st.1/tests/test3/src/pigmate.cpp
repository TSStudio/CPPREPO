#include<iostream>
#include<cstdio>

using namespace std;

long long getNum(long long n){
    if(n==1) return 0;
    if(n==2) return 1;
    return (n-1)*(getNum(n-1)+getNum(n-2));
}

int main(void){
    freopen("pigmate.in","r",stdin);
    freopen("pigmate.out","w",stdout);
    int n;
    cin>>n;
    cout<<getNum(n);
    fclose(stdin);
    fclose(stdout);
    return 0;
}