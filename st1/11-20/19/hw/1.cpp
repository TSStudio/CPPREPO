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
    for(int i=0;i<strlen(in);i++){
        a[i]=in[i]-'0';
        b[i]=in2[i]-'0';
        a[i]+=b[i];
    }
    for(int i=0;i<strlen(in);i++){
        cout<<a[i];
    }
    return 0;
}