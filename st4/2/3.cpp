#include<iostream>

using namespace std;

int main(void){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c){
        cout<<"+";
    }else if(a-b==c){
        cout<<"-";
    }else if(a*b==c){
        cout<<"*";
    }else if(a/b==c){
        cout<<"/";
    }else{
        cout<<"E";
    }
    return 0;
}