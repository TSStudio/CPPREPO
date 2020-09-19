#include<iostream>

using namespace std;

int main(void){
    short int z,x1,x2=0,x3=0,x4=0;
    cin>>z;
    x1=1;
    for(int i=0;i<=z;i++){
        x1+=x2;
        x2=x3;
        x3=x4;
        x4=x1*2;
    }
    cout<<x1;
    return 0;
}