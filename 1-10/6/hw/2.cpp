/*
Copyright 2019 TS Studio, All rights reserved
LICENSE:GNU GPLV3
DO NOT DISTURB!
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int input;
    cin>>input;
    while(input!=1){
        if(input%2!=0){
            cout<<input<<"*3+1=";
            input*=3;
            input++;
            cout<<input<<endl;
        }else{
            cout<<input<<"/2=";
            input/=2;
            cout<<input<<endl;
        }
    }
    cout<<"End";
    system("pause");
    return 0;
}