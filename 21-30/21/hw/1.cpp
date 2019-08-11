//注意从此文件开始，高精度系统经过重构
//代码结构简化
#include<iostream>
#include<cstring>

using namespace std;

int main(void){
    char input1[1001]={};
    int a[1001]={};
    cin>>input1;
    int i2=0;
    for(int i=strlen(input1)-1;i>=0;i--){
        a[i2]=input1[i]-'0';
        i2++;
    }
    //进行乘法操作
    for(int i=0;i<strlen(input1);i++){
        a[i]*=5;
    }
    //进位操作
    for(int i=0;i<strlen(input1)-1;i++){
        if(a[i]>=10){
            a[i+1]+=a[i]/10;
            a[i]%=10;
        }
    }
    //逆序输出
    for(int i=strlen(input1)-1;i>=0;i--){
        cout<<a[i];
    }
    return 0;
}