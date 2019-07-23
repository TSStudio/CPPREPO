#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char in[1001]={};
    char in2[1001]={};
    int a[1001]={};
    int b[1001]={};
    cin>>in;
    cin>>in2;
    //把长的放in 短的放in2
    if(strlen(in)<strlen(in2)){
        swap(in,in2);
    }
    //转换成数字
    for(int i=0;i<strlen(in);i++){
        a[i]=in[i]-'0';
    }
    for(int i=0;i<strlen(in2);i++){
        b[i]=in2[i]-'0';
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
    for(int i=0;i<strlen(in);i++){
        cout<<a[i];
    }
    return 0;
}