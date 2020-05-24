#include <iostream>
int gcd(int a,int b){
    int t;
    while(b>0){
        a%=b;
        t=b;
        b=a;
        a=t;
    }
    return a;
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
} 
int gcd3(int a,int b,int c){
    return gcd(gcd(a,b),c);
}
int lcm3(int a,int b,int c){
    return lcm(lcm(a,b),c);
}
  
int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    printf("%d %d", gcd3(a,b,c), lcm3(a,b,c));
    return 0;
}