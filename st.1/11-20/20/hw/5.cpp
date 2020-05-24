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
    bool nega=false;
    //把长的放in 短的放in
    if(strlen(in)!=strlen(in2)){
        if(strlen(in)<strlen(in2)){
            swap(in,in2);//此处可判断in一定大于in2
            nega=true;
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
                    nega=true;
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
    int a2[1001]={};
    int ix=0;
    for(int i=0;i<strlen(in);i++){  
        if(a[i]==0&&flag) continue;  
        flag=false;
        a2[ix]=a[i];
        ix++;
    }
    ap=0;
    int t=0;
    for(int i=ix-1;i>=0;i--){
        a2[i]*=2;
        a2[i]+=t;
        t=0;
        //如果需要进位
        if(a2[i]>=10&&i!=0){
            t=1;
            //前一位+1
            a2[i]%=10;
            //这一位对10取余
        }
    }
    for(int i=0;i<ix;i++){
        cout<<a2[i];
    }
    return 0;  
}  