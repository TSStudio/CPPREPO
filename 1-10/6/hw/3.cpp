/*
Copyright 2019 TS Studio, All rights reserved
LICENSE:GNU GPLV3
DO NOT DISTURB!
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double steps,meterRequired,meterOneTime=2,meterMoved=0;//步数到时候向上取整就行
    cin>>meterRequired;
    while(meterMoved<meterRequired){
        steps++;
        meterMoved+=meterOneTime;
        meterOneTime*=0.98;
    }
    cout<<steps;
    system("pause");
    return 0;
}