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

    //处理加法
    char inx[1001]={};
    char in2x[1001]={};
    int ax[1001]={};
    int bx[1001]={};
    //输入
    for(int i=0;i<CHARC;i++){
        sprintf(inx,"%s%d",inx,c[i]);
    }
    bool flag=true;
    for(int i=0;i<strlen(in);i++){
        if(flag&&a[i]==0) continue;
        flag=false;
        sprintf(in2x,"%s%d",in2x,a[i]);
    }
    if(flag){
        sprintf(in2x,"0");
    }
    //把长的放in 短的放in2
    if(strlen(inx)<strlen(in2x)){
        swap(inx,in2x);
    }
    //转换成数字
    for(int i=0;i<strlen(inx);i++){
        ax[i]=inx[i]-'0';
    }
    for(int i=0;i<strlen(in2x);i++){
        bx[i]=in2x[i]-'0';
    }
    //正常加法
    bef=0;
    int ap=0;
    for(int i=strlen(in2x)-1;i>=0;i--){
        ap=i+strlen(inx)-strlen(in2x);
        ax[ap]+=bx[i];
        //如果需要进位
        if((ax[ap]>=10&&i!=0)||(ax[ap]>=10&&strlen(inx)!=strlen(in2x))){
            ax[ap-1]+=1;
            //前一位+1
            ax[ap]%=10;
            //这一位对10取余
        }else if(ax[ap]>=10){
            if(ax[ap]>=10) bef=1;
        }
    }
    bool flg=true;
    for(int i=0;i<strlen(inx);i++){
        if(ax[i]==0&&flg) continue;
        flg=false;
        cout<<ax[i];
    }
    return 0;
}