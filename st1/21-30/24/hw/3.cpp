#include<iostream>

using namespace std;

int getage(int n){
    if(n==1) return 10;
    return getage(n-1)+2;
}
int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",getage(n));
    return 0;
}