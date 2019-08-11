#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

int main(void){
    char input1[1001]={},input2[1001]={};
    int a[1001]={},b[1001]={},c[1001]={};//搞个寄存器c
    cin>>input1;
    cin>>input2;
    int i2=0;
    for(int i=strlen(input1)-1;i>=0;i--){
        a[i2]=input1[i]-'0';
        i2++;
    }
    i2=0;
    for(int i=strlen(input2)-1;i>=0;i--){
        b[i2]=input2[i]-'0';
        i2++;
    }
    //进行乘法操作
    for(int i=0;i<strlen(input1);i++){
        for(int i3=0;i3<strlen(input2);i3++){
            c[i+i3]+=b[i3]*a[i];
        }
    }
    //最后一位获取
    int final=strlen(input1)-1+strlen(input2)-1+1;
    //进位操作
    for(int i=0;i<final;i++){
        if(c[i]>=10){
            c[i+1]+=c[i]/10;
            c[i]%=10;
        }
    }
    //逆序输出
    for(int i=final;i>=0;i--){
        cout<<c[i];
    }
    return 0;
}