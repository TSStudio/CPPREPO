#include<iostream>

using namespace std;

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
bool isOK(int x,int y){
    if(x>=y) return false;
    if(gcd(x,y)!=1) return false;
    return true;
}
int main(void){
    int a[100]={};
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int total=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(isOK(a[i],a[j])){
                total++;
            }
        }
    }
    printf("%d",total);
    return 0;
}