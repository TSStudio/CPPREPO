#include<iostream>
#include<cstdio>

using namespace std;


int A,B;
int numN(int N){
    if(N==1) return A;
    if(N==2) return B;
    return (numN(N-1)+numN(N-2));
}
int main(void){
    freopen("num.in","r",stdin);
    freopen("num.out","w",stdout);
    int n;
    cin>>A>>B>>n;
    for(int i=1;i<=n;i++){
        printf("%d ",numN(i));
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}