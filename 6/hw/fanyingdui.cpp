/*
Copyright 2019 TS Studio, All rights reserved
LICENSE:GNU GPLV3
DO NOT DISTURB!
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int time,alpha=1,beta=0,alphap,betap;
    cin>>time;
    for(int i=0;i<time;i++){
        betap=alpha*3;
        betap+=beta*2;
        alphap=beta;
        alpha=alphap;
        beta=betap;
    }
    cout<<alpha<<" "<<beta;
    return 0;
}