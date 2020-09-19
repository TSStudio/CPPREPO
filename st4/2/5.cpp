#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(void){
    int N,A=0,B=0,C=0;
    scanf("%d",&N);
    //A 6 B 5 C 4
    C=N/4;
    if(N%4==1){
        C--;
        B++;
    }else if(N%4==2){
        C--;
        A++;
    }else if(N%4==3){
        C-=2;
        A++;
        B++;
    }
    printf("A=%d B=%d C=%d",A,B,C);
    return 0;
}