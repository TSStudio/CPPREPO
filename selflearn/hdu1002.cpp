#include<iostream>
#include<cstring>

using namespace std;

int main(void){
    int T;
    cin>>T;
    for(int f=1;f<=T;f++){
        char in[1001]={};
        char in2[1001]={};
        int a[1001]={};
        int b[1001]={};
        cin>>in;
        cin>>in2;
        bool swaper=false;
        //把长的放in 短的放in2
        if(strlen(in)<strlen(in2)){
            swaper=true;
            swap(in,in2);
        }
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
        cout<<"Case "<<f<<":"<<endl;
        if(!swaper){
            for(int i=0;i<strlen(in);i++){
                cout<<in[i];
            }
            cout<<" + ";
            for(int i=0;i<strlen(in2);i++){
                cout<<in2[i];
            }
            cout<<" = ";
        }else{
            for(int i=0;i<strlen(in2);i++){
                cout<<in2[i];
            }
            cout<<" + ";
            for(int i=0;i<strlen(in);i++){
                cout<<in[i];
            }
            cout<<" = ";
        }
        for(int i=0;i<strlen(in);i++){
            cout<<a[i];
        }
        cout<<endl<<endl;
    }
    return 0;
}