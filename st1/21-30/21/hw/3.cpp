#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

int main(void){
    char input1[1001],input2[1001]={};
    int a[1001]={},b[1001]={},c[1001]={},n;
    cin>>n;
    cin>>input1;
    int i2=0;
    for(int i=strlen(input1)-1;i>=0;i--){
        a[i2]=input1[i]-'0';
        i2++;
    }
    for(int xxx=1;xxx<n;xxx++){
        cin>>input2;
        i2=0;
        for(int i=strlen(input2)-1;i>=0;i--){
            b[i2]=input2[i]-'0';
            i2++;
        }
        //进行乘法操作
        for(int i=0;i<997;i++){
            for(int i3=0;i3<strlen(input2);i3++){
                c[i+i3]+=b[i3]*a[i];
            }
        }
        //进位操作
        for(int i=0;i<1000;i++){
            if(c[i]>=10){
                c[i+1]+=c[i]/10;
                c[i]%=10;
            }
        }
        //把c传递给a并清空c
        for(int i=0;i<1000;i++){
            a[i]=c[i];
            c[i]=0;
        }
    }
    //逆序输出
    bool flag=true;
    for(int i=1001;i>=0;i--){
        if(flag&&a[i]==0) continue;
        flag=false;
        cout<<a[i];
    }
    return 0;
}