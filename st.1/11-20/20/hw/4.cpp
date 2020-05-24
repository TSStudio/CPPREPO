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
    //把长的放in 短的放in
    if(strlen(in)!=strlen(in2)){
        if(strlen(in)<strlen(in2)){
            swap(in,in2);//此处可判断in一定大于in2
        }
        //转换成数字 
        for(int i=0;i<strlen(in);i++){
            a[i]=in[i]-'0';
        }
        for(int i=0;i<strlen(in2);i++){
            b[i]=in2[i]-'0';
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
    int ap=0;  
    for(int i=strlen(in2)-1;i>=0;i--){  
        ap=i+strlen(in)-strlen(in2);  
        a[ap]-=b[i];  
        //如果需要借位  
        if(a[ap]<0){  
            a[ap-1]-=1;  
            //前一位-1  
            a[ap]+=10;  
            //这一位加10  
        }
    }  
    bool flag=true;
    for(int i=0;i<strlen(in);i++){  
        if(a[i]==0&&flag) continue;  
        flag=false;  
        cout<<a[i];  
    }  
    return 0;  
}  