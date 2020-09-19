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
    int height,jumpTimes=1;
    double metersPassed=0,metersJump;
    cin>>height;
    metersPassed+=height;
    metersJump=height;
    while(jumpTimes<=10){
        metersJump=metersJump/2;
        metersPassed+=metersJump*2;
        jumpTimes++;
    }
    cout<<fixed<<setprecision(4)<<metersPassed-(metersJump*2)<<endl<<metersJump;
    system("pause");
    return 0;
}