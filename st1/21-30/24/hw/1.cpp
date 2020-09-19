#include <iostream>
int digui(int n){
    if(n==1) return 1;
    else return (digui(n-1)+n);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",digui(n));
    return 0;
}