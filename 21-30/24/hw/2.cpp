#include<iostream>

using namespace std;
//A1=1,A2=2, ... ,An=2*An-1+An-2(n>2)
long long getPell(long long n){
    if(n==1) return 1;
    if(n==2) return 2;
    return 2*getPell(n-1)+getPell(n-2);
}
int main(void){
    int n,f[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&f[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\n",getPell(f[i])%32767);
    }
    return 0;
}