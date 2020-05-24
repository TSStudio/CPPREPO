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
    int i2=0;
    for(int i=0;i<strlen(in);i++){
        a[i]=in[i]-'0';
    }
    for(int i=0;i<strlen(in2);i++){
        b[i]=in2[i]-'0';
    }
    for(int i=strlen(in2)-1;i>=0;i--){
        //11111
        //  222
        a[i+strlen(in)-strlen(in2)]+=b[i];
    }
    //其他原样输出
    for(int i=0;i<strlen(in);i++){
        cout<<a[i];
    }
    return 0;
}