#include<iostream>
#include<cstring>

using namespace std;

int main(void){
    char input1[1001]={},input2[1001]={};
    int a[1001]={},b[1001]={},c[1001]={},pre=0;
    cin>>input1;
    cin>>input2;
    int i2=0;
    if(strlen(input1)<strlen(input2)) swap(input1,input2);
    for(int i=strlen(input1)-1;i>=0;i--){
        a[i2]=input1[i]-'0';
        i2++;
    }
    i2=0;
    for(int i=strlen(input2)-1;i>=0;i--){
        b[i2]=input2[i]-'0';
        i2++;
    }
    if(strlen(input1)==strlen(input2)){
        //把大数放a
        for(int i=strlen(input1)-1;i>=0;i++){
            if(a[i]==b[i]) continue;
            if(a[i]<b[i]) swap(a,b);
            break;
        }
    }

    //进行求差操作
    for(int i=0;i<strlen(input2);i++){
        a[i]-=b[i];
        if(a[i]<0){//需要借位
            a[i+1]-=1;//前一位减1
            a[i]+=10;//后一位+10
        }
    }
    //把a传给b
    for(int i=0;i<strlen(input1)+pre;i++){
        b[i]=a[i];
    }
    //进行乘法操作
    for(int i=0;i<strlen(input1)+pre;i++){
        for(int i3=0;i3<strlen(input1)+pre;i3++){
            c[i+i3]+=b[i3]*a[i];
        }
    }
    //最后一位获取
    int final=strlen(input1)+pre;
    //进位操作
    for(int i=0;i<1000;i++){
        if(c[i]>=10){
            c[i+1]+=c[i]/10;
            c[i]%=10;
        }
    }
    //逆序输出
    bool flag=true;
    for(int i=1000;i>=0;i--){
        if(flag&&c[i]==0) continue;
        flag=false;
        cout<<c[i];
    }
    return 0;
}