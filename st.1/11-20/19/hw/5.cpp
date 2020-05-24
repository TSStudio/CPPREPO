#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char in[100]={};
    char in2[100]={};
    int a[100]={};
    int b[100]={};
    cin>>in;
    cin>>in2;
    if(strlen(in)!=strlen(in2)){
        if(strlen(in)<strlen(in2)){
            swap(in,in2);//此处可判断in一定大于in2
        }
        //转换成数字 
        for(int i=0;i<strlen(in);i++){
            a[i]=in[i]-'0';
        }
    }else{
        //转换成数字
        for(int i=0;i<strlen(in);i++){
            a[i]=in[i]-'0';
        }
        for(int i=0;i<strlen(in2);i++){
            b[i]=in2[i]-'0';
        }
        //位数相同 从最高位开始比
        for(int i=0;i<strlen(in);i++){
            if(a[i]!=b[i]){
                if(a[i]<b[i]){
                    swap(a,b);
                }
                break;
            }
        }
    }
    //正常加法
    int bef=0;
    int ap=0;
    for(int i=strlen(in2)-1;i>=0;i--){
        ap=i+strlen(in)-strlen(in2);
        a[ap]+=b[i];
        //如果需要进位
        if((a[ap]>=10&&i!=0)||(a[ap]>=10&&strlen(in)!=strlen(in2))){
            a[ap-1]+=1;
            //前一位+1
            a[ap]%=10;
            //这一位对10取余
        }else if(a[ap]>=10){
            if(a[ap]>=10) bef=1;
        }
    }
    int PRECI=0;
    for(int i=strlen(in)-1;i>=0;i--){
        a[i]*=2;
        a[i]+=PRECI;
        //如果需要进位
        if(a[i]>=10&&i!=0){
            PRECI=1;
            //前一位+1
            a[i]%=10;
            //这一位对10取余
        }else if(a[i]>=10){
        }else{
            PRECI=0;
        }
    }
    for(int i=0;i<strlen(in);i++){
        cout<<a[i];
    }
    return 0;
}