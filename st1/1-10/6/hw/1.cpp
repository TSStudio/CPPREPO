/*
Copyright 2019 TS Studio, All rights reserved
LICENSE:GNU GPLV3
DO NOT DISTURB!
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int amount;
    cin>>amount;
    int i=0;
    int num,total=0,min=1000,max=0;
    while(i<amount){
        cin>>num;
        total+=num;
        if(num<min){
            min=num;
        }
        if(num>max){
            max=num;
        }
        i++;
    }
    double avg=(double)total/amount;
    cout<<min<<" "<<max<<" "<<fixed<<setprecision(3)<<avg;
    system("pause");
    return 0;
}