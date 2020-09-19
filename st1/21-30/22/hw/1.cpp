#include<iostream>
#include<cstring>

using namespace std;
int main(void){
    char in[1001]={},in2[1001]={};
    int a[1001]={},b[1001]={},num,c[1001]={};
    scanf("%s%d",&in,&num);
    sprintf(in2,"%d",num);
    // 111111111111
    // 100
    for(int i=0;i<strlen(in);i++){
        a[i]=in[i]-'0';
    }
    for(int i=0;i<strlen(in2);i++){
        b[i]=in2[i]-'0';
    }
    int CHARC=0;
    int bef=0;
    for(int i=0;i<strlen(in)-strlen(in2)+1;i++){
        //从被除数的第i位开始比对
        for(int i2=0;;i2++){
            
            for(int ix=strlen(in)-1;ix>=0;ix--){
                if(a[ix]>=0) continue;
                for(;;){
                    if(a[ix]>=0) break;
                    a[ix]+=10;
                    a[ix-1]-=1;
                }
            }
            if((i2==strlen(in2)-1&&a[i+i2]>=b[i2])||a[i+i2]>b[i2]||bef==1){
                //减法,商的对应位+1
                for(int i3=0;i3<strlen(in2);i3++){
                    a[i+i3]-=b[i3];
                }
                c[i]+=1;
                i2=-1;
                bef=0;
                continue;
            }
            if(a[i+i2]>=b[i2]){
                continue;
            }else{
                bef=0;
                for(int ix=i;ix<=i+i2;ix++){
                    if(a[ix]!=0) bef=1;
                }
                CHARC++;
                break;
            }
        }
    }
    //从最后一位开始处理借位问题
    for(int i=strlen(in)-1;i>=0;i--){
        if(a[i]>=0) continue;
        for(;;){
            if(a[i]>=0) break;
            a[i]+=10;
            a[i-1]-=1;
        }
    }
    for(int i=0;i<CHARC;i++){
        printf("%d",c[i]);
    }
    printf("\n");
    bool flag=true;
    for(int i=0;i<strlen(in);i++){
        if(flag&&a[i]==0) continue;
        flag=false;
        printf("%d",a[i]);
    }
    return 0;
}